class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        vector<vector<int>>vec;
        if(arr.size()==0)return vec;
        
        sort(arr.begin(),arr.end());
        
        vector<int>currVec = arr[0];
        for(int i = 1;i<arr.size();i++){
            vector<int>nextVec = arr[i];
            
            if(currVec[1] >= nextVec[0]){
                //overlapping
                currVec[1] = max(currVec[1], nextVec[1]);
            }
            else{
               vec.push_back(currVec); 
               currVec = arr[i];
            }
        }
        vec.push_back(currVec);
        return vec;
    }
};
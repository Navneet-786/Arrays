class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        for(int i = 0;i<arr.size();i++){
            int temp_target = target - arr[i];
            int j = i+1, k = arr.size()-1;
            while(j<k){
                int sum =  arr[j] + arr[k];
                if(sum > temp_target)k--;
                else if (sum < temp_target) j++;
                else{
                    return true;
                }
            }
        }
        return false;
        
        
        // for(int i = 0;i<arr.size();i++){
        //     int to_search = target -  arr[i];
        //     unordered_set<int>st;
        //     for(int j = i+1;j<arr.size();j++){
        //         int set_search = to_search - arr[j];
        //         if(st.count(set_search))return true;
        //         st.insert(arr[j]);
        //     }
        // }
        // return false;
    }
};
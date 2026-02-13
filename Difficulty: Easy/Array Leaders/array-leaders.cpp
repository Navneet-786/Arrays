

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int>vec;
        int maxi = INT_MIN;
        for(int i = arr.size()-1;i>=0;i--){
            if(arr[i] >= maxi){
                vec.push_back(arr[i]);
                maxi = arr[i];
            }
        }
        reverse(vec.begin(),vec.end());
        return vec;
        
    }
};
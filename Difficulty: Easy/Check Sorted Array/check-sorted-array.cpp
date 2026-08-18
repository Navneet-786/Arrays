class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        if(arr.size()==1)return 1;
        for(int i = 1;i<arr.size();i++){
            if(arr[i]< arr[i-1])return false;
        }
        
        return true;
        
        
    }
};
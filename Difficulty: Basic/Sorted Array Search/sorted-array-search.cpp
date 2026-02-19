class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        for(auto it:arr){
            if(it==k)return 1;
        }
        return 0;
        
    }
};
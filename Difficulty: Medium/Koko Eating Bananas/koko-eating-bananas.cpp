class Solution {
  public:
  bool isCanEat(vector<int>&vec, int mid,int k){
      int hours = 0;
      for(auto it:vec){
          if(it%mid ==0){
              //completely devisible
              hours += it/mid;
          }else{
              hours += it/mid + 1;
          }
      }
      if(hours > k)return false;
      return true;
  }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int maxi = INT_MIN;
        for(auto it:arr){
            maxi = max(maxi,it);
        }
        
        int start = 1, end = maxi;
        int ans = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(isCanEat(arr,mid,k)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        
        return ans;
    }
};
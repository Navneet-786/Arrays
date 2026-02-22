class Solution {
  public:
  bool check(vector<int>&vec, int k, int num){
      int count = 0;
      for(auto it:vec){
          if(it%num==0){
              count+= it/num;
          }
          else{
              count+= ((it/num) + 1);
          }
      }
      return count <= k;
  }
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int maxi = INT_MIN;
        for(auto it:arr){
            maxi = max(maxi, it);
        }
        int start = 1, end = maxi;
        int ans = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(check(arr, k, mid)){
                ans = mid;
                end = mid-1;
                
            }
            else{
             
                start = mid +1;
            }
        }
        return ans;
        
    }
};

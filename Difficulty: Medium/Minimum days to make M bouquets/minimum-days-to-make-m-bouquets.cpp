class Solution {
  public:
  bool check_day(vector<int>&vec, int k, int m, int day){
      int required_flower = k * m;
      
      int count = 0;
      int bouquet = 0;
      for(auto it: vec){
          if(it <= day){
              count++;
              if(count == k){
                  bouquet++;
                  count  = 0;
              }
              
          }
          else{
              count = 0;
          }
      }
      
      return bouquet >= m;
      
  }
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int maxi = INT_MIN;
        for(auto it:arr){
            maxi = max(maxi,it);
        }
        
        int start = 0, end = maxi;
        int ans_days = -1;
        while(start <= end){
            int day = start + (end - start)/2;
            if(check_day(arr, k, m , day)){
                ans_days = day;
                end = day - 1;
            }
            else{
                start = day + 1;
            }
        }
        return ans_days;
    }
};
class Solution {
  public:
  long long findCal(int mid, int n){
      long long ans = 1;
      for(int i = 0;i<n;i++){
          ans *= mid;
      }
      return ans;
  }
    int nthRoot(int n, int m) {
        // Code here
        if(m==0)return 0;
        if(n==1)return m;
        if(m==1)return 1;
        int start = 0, end = m/2;
        int ans = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            
            long long cal = findCal(mid, n);
            if(cal == (long long)m)return mid;
            else if(cal > m){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};
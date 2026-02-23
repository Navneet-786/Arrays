// User function Template for C++

class Solution {
  public:
  using ll = long long;
  
  bool check(int arr[], int n, int d,int cap){
    ll days = 1;
    ll curr_wt = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] > cap)return false;
        if(curr_wt + arr[i] <= cap){
            curr_wt += arr[i];
        }else{
            days++;
            curr_wt = arr[i];
        }
        
    }
    return days <= d;
  }
    int leastWeightCapacity(int arr[], int n, int d) {
        // code here
        ll sum = 0;
        for(int i = 0;i<n;i++){
            sum+=arr[i];
        }
        
        int start = 1, end = sum;
        ll ans = -1;
        while(start <= end){
            ll mid = start + (end - start)/2;
            
            if(check(arr, n,d,mid )){
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
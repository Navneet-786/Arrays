class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int ans = INT_MIN;
        int sum = 0;
        int i = 0;
        while(i<arr.size()){
            sum += arr[i];
            ans = max(ans, sum);
            if(sum < 0){
                sum = 0;
            }
            i++;
        }
        return ans;
    }
};
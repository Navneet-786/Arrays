class Solution {
  public:
    int largest(vector<int> &arr) {
        int ans = INT_MIN;
        for(auto it:arr) ans = max(ans, it);
        return ans;
    }
};

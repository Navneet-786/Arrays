class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      priority_queue<int>q(nums.begin(),nums.end());
      int ans = -1;
      while(k--){
        ans = q.top();
        q.pop();
      }
      return ans;
    }
};
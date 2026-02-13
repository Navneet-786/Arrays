class Solution {
public:
    int maxProfit(vector<int>& vec) {
      int min_price = vec[0];
      int ans = 0;
      for(int i = 1;i < vec.size();i++){
        //track the min price
        min_price = min(min_price, vec[i]);

        //profit calculate
        int profit = vec[i] - min_price;

        ans = max(ans, profit);
      }
      return ans;
    }
};
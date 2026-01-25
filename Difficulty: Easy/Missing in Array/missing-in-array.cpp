class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size()+1;
        int sum = 0;
        int i = 1;
        while(i<=n){
            sum+=i;
            i++;
        }
        for(auto it:arr){
            sum-=it;
        }
        return sum;
        
        
    }
};
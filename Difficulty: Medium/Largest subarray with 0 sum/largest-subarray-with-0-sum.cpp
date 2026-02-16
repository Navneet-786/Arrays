class Solution {
  public:
    int maxLength(vector<int>& arr) {
       unordered_map<int,int>mpp;
       int ans_length = 0;
       int i = 0;
       int sum = 0;
       while(i<arr.size()){
           sum += arr[i];
           if(sum==0){
               ans_length = max(ans_length, i+1);
           }
           //check this sum is in map
           else if(mpp.count(sum)){
               ans_length = max(ans_length, i - mpp[sum]);
           }
           else{
               mpp[sum] = i;
           }
           i++;
       }
       return ans_length;
    }
};
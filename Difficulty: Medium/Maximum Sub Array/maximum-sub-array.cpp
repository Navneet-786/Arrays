// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
       int ansStart = 0;
       int ansEnd = 0;
       int ansSum = 0;
       int currSum = 0;
       int start = 0;
       int i = 0;
       bool isPositive = false;
       for(auto it:arr){
           if(it>=0){
               isPositive = true;
               break;
           }
       }
       if(!isPositive)return {-1};
       while(i<arr.size()){
           //skip all -ve values
           while(i<arr.size() && arr[i] < 0)i++;
           if(i == arr.size())break;
           
           
           start = i;
           currSum = 0;
           while(i<arr.size() && arr[i]>=0){
               currSum += arr[i];
               i++;
           }
           
           if(ansSum < currSum){
               ansSum = currSum;
               ansStart = start;
               ansEnd = i-1;
           }else if(ansSum == currSum){
               int currLen =  i - start;
               if(currLen > ansEnd - ansStart + 1){
                   ansStart = start;
                   ansEnd = i-1;
                   ansSum = currSum;
               }
           }
           if(i==arr.size())break;
       }
      
       vector<int>ans;
       for(int i = ansStart;i<=ansEnd;i++){
           ans.push_back(arr[i]);
       }
       return ans;
       
    }
};
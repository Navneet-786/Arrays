class Solution {
  public:
    int longestSubarray(vector<int>& arr, int target) {
        // code here
        int sum = 0;
        int ans = 0;
        unordered_map<int,int>mpp;
        for(int i = 0;i<arr.size();i++){
            sum += arr[i];
            
            if(sum == target){
                ans = max(ans,i+1);
            }else{
                 //check that traget exist or not
                int temp = sum - target;
                
                if(mpp.count(temp)){
                   //present 
                   int tempLen = i - mpp[temp] ;
                   ans = max(ans,tempLen);
                }
            }
           
            if(!mpp.count(sum)){
                mpp[sum] = i;
            }
            
        }
        return ans;
    }
};
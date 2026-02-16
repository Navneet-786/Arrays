class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int>mpp;
        mpp[0] = 1; 
        int currXor = 0;
        int count =0;
        for(int i = 0;i<arr.size();i++){
            currXor ^= arr[i];
            
            int target = k ^ currXor;
            
            if(mpp.count(target)){
                count += mpp[target];
            }
            
            mpp[currXor]++;
        }
        return count;
    }
};
class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int>ans;
        int currIndex = 0;
        while(currIndex< arr.size()){
            int tempIndex = currIndex+1;
            while(tempIndex< arr.size() &&
                arr[tempIndex] == arr[currIndex])tempIndex++;
            
            ans.push_back(arr[currIndex]);
            currIndex = tempIndex;
        }
        return ans;
    }
};
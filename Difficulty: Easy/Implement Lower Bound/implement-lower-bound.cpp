class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        if(target > arr[arr.size()-1])return arr.size();
        
        int start = 0, end = arr.size()-1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(target <= arr[mid]){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid +1;
            }
        }
        
        return ans;
    }
};

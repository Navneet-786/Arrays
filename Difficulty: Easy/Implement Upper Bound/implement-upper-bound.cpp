class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        if(target > arr[arr.size()-1])return arr.size();
        
        int start = 0, end = arr.size()-1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end - start)/2;
            
            if(arr[mid] <= target){
                start = mid+1;
            }
            else{
                ans = mid;
                end = mid-1;
            }
        }
        return ans;
        
    }
};

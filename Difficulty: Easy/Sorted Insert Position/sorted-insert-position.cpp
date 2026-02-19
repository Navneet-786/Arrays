class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        if(k > arr[arr.size()-1])return arr.size();
        int start = 0,end = arr.size()-1;
        while(start<= end){
            int mid = start + (end-start)/2;
            
            if(k > arr[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            
        }
        return start;
    }
};
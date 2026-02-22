class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int start = 0, end = arr.size()-1;
        while(start < end){
            if(arr[start]<= arr[end]){
                return arr[start];
            }
            
            int mid = start + (end-start)/2;
            
            if(arr[start] <= arr[mid]){
                start = mid+1;
            }
            else{
                end = mid;
            }
        }
        return arr[start];
    }
};
class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        if(arr.size()==1)return 0;
        int start = 0, end = arr.size()-1;
        while(start< end){
            int mid = start + (end-start)/2;
        
            if(arr[mid] < arr[mid+1]){
                start = mid+1;
            }
            else{
                end = mid;
            }
        }
        return start;
        
    }
};
class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
       int start = 0, end = arr.size()-1;
       while(start <= end){
           int mid = start + (end - start)/2;
           int ideal_ele_at_mid = mid+1; 
           int actual_ele_at_mid = arr[mid];
           int no_of_missing_ele = actual_ele_at_mid - ideal_ele_at_mid;
           
           if(k>no_of_missing_ele)start = mid+1;
           else{
               end = mid-1;
           }
       }
       
       return k + end + 1;
    }
};
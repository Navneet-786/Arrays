class Solution {
    int quickSelect(vector<int>&nums,int start, int end){
         int pivot = nums[end];
        int pivotIndex = start;
         
         
          for(int i = start; i < end; i++){
            if(nums[i] <= pivot){
                swap(nums[i], nums[pivotIndex]);
                pivotIndex++;
            }
        }

        swap(nums[pivotIndex], nums[end]);
        return pivotIndex;
    }
    
  public:
    int kthSmallest(vector<int> &arr, int k) {
        if(k>arr.size())return -1;
        
        int n = arr.size();
        int targetIndex = k-1;
        
        
       
        int start = 0, end = n-1;
        
        while(start <= end){
            
            int ansIndex = quickSelect(arr, start,end);
            if(ansIndex == targetIndex)return arr[ansIndex];
            else if(ansIndex < targetIndex){
                start = ansIndex+1;
            }
            else{
                end = ansIndex-1;
            }
        }
        
        return -1;
        
    }
};
class Solution {
   int quickSelect(vector<int>&nums, int start, int end){
       int pivot = nums[end];
       //this index is special where all the smallest elememnt
       //from pivot is left of pivotIndex and greater are on right of 
       //pivot index
       int pivotIndex =  start;
       
       for(int i = start;i<end;i++){
           if(nums[i] <= pivot){
               swap(nums[i], nums[pivotIndex]);
               pivotIndex++;
           }
       }
       
       swap(nums[end], nums[pivotIndex]);
       return pivotIndex;
   }
    
  public:
    int kthSmallest(vector<int> &nums, int k) {
       int n = nums.size();
        
        //find the targetIndex
        int targetIndex = k - 1; //kth smallest
        
        int start= 0,end =  n-1;
        
        while(start <= end){
            int tempIndex = quickSelect(nums, start, end);
            
            if(tempIndex==targetIndex)return nums[tempIndex];
            else if(targetIndex < tempIndex){
                end = tempIndex - 1;
            }
            else{
                start = tempIndex+1;
            }
        }
        return -1;
        
    }
};
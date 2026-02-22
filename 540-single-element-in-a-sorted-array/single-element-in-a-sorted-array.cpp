class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    if(nums.size()==1)return nums[0];
      int start = 0, end = nums.size()-1;
      while(start <= end){
        int mid = start + (end-start)/2;

        if(((mid-1 >=0 && nums[mid]!=nums[mid-1])|| mid == start)  &&
         ((mid+1 < nums.size() && nums[mid]!=nums[mid+1]) || mid==end)){
            return nums[mid];
        }
        else{
            //if just left element is equal 
            if(mid-1 >=0 && nums[mid] ==  nums[mid-1]){
                int left_length = mid - start -1;
                if(left_length & 1){
                    //odd lenght
                    end = mid-2;
                }
                else{
                    start = mid+1;
                }

            }
            else{
            //if just right elememnt is equal
                int right_length = end - mid -1;
                if(right_length & 1){
                    //odd
                    start = mid+2;
                } 
                else{
                    end = mid-1;
                }
            }
        }
      }
      return -1;
    }
};
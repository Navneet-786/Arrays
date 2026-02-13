class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one = 0;
        int two =  nums.size()-1;
        int i = 0;
        while(i<= two){
            if(nums[i]==0){
                swap(nums[i], nums[one]);
                one++;
                i++;
            }
            else if(nums[i]==2){
                swap(nums[i], nums[two]);
                two--;
            }
            else{
                i++;
            }
        }
    }
};
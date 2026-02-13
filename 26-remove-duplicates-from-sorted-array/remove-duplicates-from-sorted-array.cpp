class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0;
        int j = 0;

        while(j< nums.size()){
            // skip elements if they are same
            while(j< nums.size() && nums[i] == nums[j])j++;
            if(j==nums.size()) break;

            //now j is on unique elemnt
            i++;
            swap(nums[i], nums[j]);
            j++;
        }

        return i+1;
    }

};
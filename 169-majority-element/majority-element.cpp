class Solution {
public:
  int majorityElement(vector<int>& nums) {
    int currEle = nums[0];
    int freq = 1;
    int i = 1;
    while(i<nums.size()){
        if(currEle == nums[i])freq++;
        else{
            if(freq==0){
                currEle = nums[i];
                freq++;
            }
            else{
                freq--;
            }
        }
        i++;
    }
    return currEle;
  }
};
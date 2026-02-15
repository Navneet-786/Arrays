class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      
        int firstNumber = INT_MIN;
        int secondNumber = INT_MIN;
        int count1 = 0;
        int count2 = 0;

        for(int i = 0;i<nums.size();i++){
            int currEle = nums[i];
            if(currEle == firstNumber){
                count1++;
            }
            else if(currEle == secondNumber){
                count2++;
            }
            else if(count2 == 0){
                secondNumber = currEle;
                count2++;
            }
            else if(count1 == 0){
                firstNumber = currEle;
                count1++;
            }
            else{
                count1--;
                count2--;
            }
        }
        cout<<firstNumber<<endl;
        cout<<secondNumber<<endl;
        int cnt1 = 0;
        int cnt2 = 0;
        for(auto it:nums){
            if(it == firstNumber)cnt1++;
            if(it == secondNumber) cnt2++;
        }
        int n = nums.size();
        int target = n/3;
        vector<int>ans;
        if(cnt1 > target){
            ans.push_back(firstNumber);
        }
        if(cnt2 > target){
            ans.push_back(secondNumber);
        }
    return ans;
    }
};
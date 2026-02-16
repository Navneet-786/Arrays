class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        for(int i = 0;i<nums.size();i++){ 
           int start = i+1,end = nums.size()-1;
           while(start < end){
            int sum = nums[i] + nums[start] + nums[end];
            if(sum < 0){
                start++;
            }
            else if(sum >0){
                end--;
            }
            else{
                st.insert({nums[i],nums[start], nums[end]});
                start++;
                end--;
            }
           }
        }
        return vector<vector<int>>(st.begin(),st.end());

    }
};
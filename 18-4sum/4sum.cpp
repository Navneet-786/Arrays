class Solution {
public:
using ll = long long;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                ll local_target = target-ll(nums[i] + nums[j]);
                int start = j+1, end = nums.size()-1;
                while(start < end){
                    ll sum = nums[start] + nums[end];
                    if(sum > local_target){
                        end--;
                    }
                    else if (sum < local_target){
                        start++;
                    }
                    else{
                        st.insert({nums[i], nums[j], nums[start], nums[end]});
                        start++;
                        end--;
                    }
                }
            }
        }
        return vector<vector<int>>(st.begin(),st.end());
    }
};
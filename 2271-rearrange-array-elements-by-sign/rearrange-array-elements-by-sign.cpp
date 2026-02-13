class Solution {
public:
    vector<int> rearrangeArray(vector<int>& vec) {
        int posIndex = 0;
        int negIndex = 1;
        vector<int>ans(vec.size(),0);
        for(auto it:vec){
            if(it>=0){
                ans[posIndex] = it;
                posIndex += 2;
            }
            else{
                ans[negIndex] = it;
                negIndex += 2;
            }
        }
        return ans;
    }
};
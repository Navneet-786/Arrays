class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>st(nums.begin(),nums.end());
    
       int ansCount = 0;
       for(int num: st){
        //if prev element is not exist then we will start to count
            if(!st.count(num - 1)){
                int currEle = num;
                int cnt = 0;
                while(st.count(currEle)){
                    cnt++;
                    currEle += 1;
                }
                ansCount = max(ansCount, cnt);
        }
           
        }
        
       return ansCount;
    }
};
class Solution {
public:
int findMaxConsecutiveOnes(vector<int>& vec) {
  int i = 0;
  int count = 0;
  int ans = INT_MIN;
  while(i<vec.size()){
    //skip all the zeros
    while(i<vec.size() && vec[i]==0)i++;
    if(i==vec.size())break;
    //we are at element 1
    if(vec[i] == 1){
        count = 0;
        while(i<vec.size() && vec[i]==1){
            count++;
            i++;
        }
        ans = max(ans, count);
    }
  }

  ans = max(ans,count);
  return ans;
}
};
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int>positive;
        vector<int>negative;
        for(auto it:arr){
            if(it>=0)
            positive.push_back(it);
            else
            negative.push_back(it);
        }
        
        int i = 0;
        for(auto it:positive){
            arr[i] = it;
            i++;
        }
        
        for(auto it:negative){
            arr[i] = it;
            i++;
        }
    }
};
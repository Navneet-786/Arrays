class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        return {arr[0], arr[arr.size()-1]};
    }
};
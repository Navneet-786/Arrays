class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i = 0;i<n/2;i++){
            int lastIndex = n - i - 1;
            swap(arr[i], arr[lastIndex]);
        }
    }
};
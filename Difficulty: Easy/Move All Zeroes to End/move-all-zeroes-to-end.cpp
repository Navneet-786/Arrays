class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int i = 0;
        int j = 0;
        while(i<n && arr[i]!=0)i++;
        j = i;
        while(j<n){
            while(j<n && arr[j]==0)j++;
            if(j==n)break;
            swap(arr[i], arr[j]);
            i++;
        }
    
    }
};
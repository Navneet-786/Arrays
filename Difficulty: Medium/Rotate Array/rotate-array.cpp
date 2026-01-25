class Solution {
  public:

    void reverseTheArray(vector<int>&vec, int start, int end){
        while(start< end){
            swap(vec[start], vec[end]);
            start++;
            end--;
        }
    }
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        
        if(d>n){
            d =  d%n;
        }
        reverseTheArray(arr,0, n-1);
        
        reverseTheArray(arr,0,n-d-1);
        
        reverseTheArray(arr, n-d,n-1);
        

    }
};
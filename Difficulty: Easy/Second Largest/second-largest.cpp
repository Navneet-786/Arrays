class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int firstLargest = arr[0];
        int secondLargest =  INT_MIN;
        
        for(auto it:arr){
            if(it > firstLargest){
                secondLargest = firstLargest;
                firstLargest = it;
            }
            else if(it > secondLargest && it < firstLargest){
                    secondLargest = it;
            }
            
        }
        
        return (secondLargest == INT_MIN)?-1 :secondLargest;
        
        
    }
};
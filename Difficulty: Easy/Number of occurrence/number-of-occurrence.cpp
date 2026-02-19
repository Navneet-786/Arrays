class Solution {
  public:
  void findStartIndex(vector<int>&vec, int &target, int &ansIndex){
      int start = 0,end = vec.size()-1;
      while(start <=end){
          int mid = start +(end-start)/2;
          
          if(vec[mid] >= target){
              if(vec[mid] == target){
                   ansIndex = mid;
              }
              end = mid-1;
          }
          else if(vec[mid] < target){
              start = mid+1;
          }
      }
  }
  void findEndingIndex(vector<int>&vec,int &target, int &ansIndex){
      int start = 0,end = vec.size()-1;
      
      while(start <= end){
          int mid = start + (end-start)/2;
          
          if(vec[mid] <=target){
              if(vec[mid]==target){
                  ansIndex = mid;
              }
              start = mid+1;
          }
          else{
              end = mid-1;
          }
      }
  }
    int countFreq(vector<int>& arr, int target) {
        // code here
        if(target > arr[arr.size()-1] || target < arr[0])return 0;
        
        int startIndex = -1;
        int endIndex = -1;
        findStartIndex(arr, target, startIndex);
        findEndingIndex(arr, target, endIndex);
        
        if(startIndex==-1 ||endIndex == -1)return 0;
        return endIndex-startIndex+1;
    
    }
};

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
    vector<int> find(vector<int>& arr, int target) {
        if(arr.size()==1){
            if(arr[0]==target){
                return {0,0};
            }else{
                return {-1,-1};
            }
        }
        
        int startingIndex = -1;
        int endingIndex = -1;
        findStartIndex(arr,target, startingIndex);
        findEndingIndex(arr,target, endingIndex);
        
        return {startingIndex,endingIndex};
    }
};
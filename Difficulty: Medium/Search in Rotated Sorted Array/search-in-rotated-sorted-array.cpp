class Solution {
  public:
  int findThePivotIndex(vector<int>&arr){
      int start = 0, end = arr.size()-1;
      while(start <= end){
          if(arr[start] <= arr[end]){
              //subarray is sorted
              return start;
          }
          int mid = start + (end-start)/2;
          if(arr[mid] < arr[mid+1]  && arr[mid] < arr[mid-1]){
              return mid;
          }
          else if(arr[start] <= arr[mid]){
              //left array is sorted
              start = mid+1;
          }
          else{
              end = mid-1;
          }
      }
      return -1;
  }
  int binarysearch(vector<int>&arr, int start, int end, int &key){
      while(start<=end){
          int mid = start + (end - start)/2;
          if(arr[mid] == key){
              return mid;
          }
          else if(key > arr[mid]){
              start = mid+1;
          }
          else{
              end=  mid-1;
          }
      }
      
      return -1;
  }
    int search(vector<int>& arr, int key) {
        // Code Here
        int pivot =-1;
        if(arr[0] <= arr[arr.size()-1]){
            //sorted
            pivot = 0;
        }
        else{
            pivot =  findThePivotIndex(arr);
        }

   
        if(pivot == -1)return -1;
        
        if(key >= arr[0]  &&  key <= arr[pivot-1]){
           
            return binarysearch(arr, 0,pivot-1, key);
        }
        else{
            
            return binarysearch(arr, pivot,arr.size()-1, key);
        }
        
        return -1;
    }
};
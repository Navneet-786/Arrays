class Solution {
  public:
    bool search(vector<int>& arr, int key) {
        // Code here
        int start = 0, end = arr.size()-1;
        while(start <=end){
            while(start <= end && arr[start] == arr[start+1])start++;
            while(end >=start && arr[end] == arr[end-1])end--;
            
            int mid = start + (end-start)/2;
            if(key == arr[mid])return true;
            else if(arr[start]< arr[end]){
                if(key >= arr[start] && key < arr[mid]){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
            else{
                //check left side is sorted
                if(arr[start]<=arr[mid]){
                    if(key >= arr[start] && key <arr[mid]){
                        end = mid-1;
                    }
                    else{
                        start = mid+1;
                    }
                }
                else{
                    if(key > arr[mid] && key <= arr[end]){
                        start = mid+1;
                    }
                    else{
                        end = mid-1;
                    }
                }
            }
        }
        
        return false;
    }
};
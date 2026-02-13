class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        //find the weak point from end
        int i = -1;
        for(i = arr.size()-2;i>=0;i--){
            if(arr[i] < arr[i+1])break;
        }
        if(i==-1){
            reverse(arr.begin(),arr.end());
            return ;
        }
        
        int weakIndex =  i;
        //element just greater than weakindex Element
        int index = -1;
        for(int i = arr.size()-1;i>=0;i--){
            if(arr[weakIndex] < arr[i]){
                index = i;
                break;
            }
        }
        
        swap(arr[weakIndex], arr[index]);
        sort(arr.begin()+ weakIndex + 1 , arr.end());
    }
};
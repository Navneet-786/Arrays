class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)return x;
        int start = 0, end = x/2;
        int ans = 0;
        while(start <= end){
            int mid = start+(end-start)/2;
            long long  cal = (long long)mid*mid;
            if(cal ==(long long) x){
                return mid;
            }
            else if(cal > x){
                end = mid-1;
            }
            else{
                ans = mid;
                start = mid+1;
            }
        }
        return ans;
    }
};
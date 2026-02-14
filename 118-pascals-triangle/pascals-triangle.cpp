class Solution {
public:
int element(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>vec;
       for(int i = 0;i<numRows;i++){
        vector<int>temp(i+1,0);
        for(int j = 0;j<temp.size();j++){
            if(j==0)temp[j] = 1;
            else if(j==i)temp[j]= 1;
            else{
                temp[j] = vec[i-1][j-1] + vec[i-1][j];
            }
        }
        vec.push_back(temp);
       }

       return vec;
    }
};
class Solution {
public:
vector<int> findMissing(vector<vector<int>>&grid, int n){
    vector<int>freq(n*n+1,0);
    for(auto it:grid){
        for(auto gt:it){
            freq[gt]++;
        }
    }
    int miss = -1, repeat = -1;
    for(int i = 1;i<freq.size();i++){
        if(freq[i] >1){
            repeat = i;
        }
        if(freq[i]==0){
            miss = i;
        }
    }

    return {repeat, miss};
}
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       return findMissing(grid, grid.size()); 
    }
};
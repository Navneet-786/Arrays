class Solution {
public:
//transpose of matrix
    void transpose(vector<vector<int>>&vec){
        for(int i = 0;i<vec.size();i++){
            for(int j = 0;j<vec.size();j++){
                if(i>j){
                    swap(vec[i][j], vec[j][i]);
                }
            }
        }
    }

    void reversing(vector<vector<int>>&vec){
        int col1 = 0, col2 = vec[0].size()-1;
        while(col1< col2){
            for(int i = 0;i<vec.size();i++){
                swap(vec[i][col1], vec[i][col2]);
            }
            col1++;
            col2--;
        }
    }
    void rotate(vector<vector<int>>& vec) {
      transpose(vec);
      reversing(vec);
    }
};
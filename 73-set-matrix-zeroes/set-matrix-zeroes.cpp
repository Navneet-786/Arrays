class Solution {
public:

void setZeroes(vector<vector<int>>& vec) {
       vector<int>rows(vec.size(),0);
       vector<int>cols(vec[0].size(),0);

       for(int i = 0;i<vec.size();i++){
        for(int j = 0;j<vec[0].size();j++){
            if(vec[i][j]==0){
                rows[i] = 1;
                cols[j] = 1;
            }
        }
       }

       //this is time to fill rows and cols zeros
       for(int i = 0;i<rows.size();i++){
            if(rows[i]==1){
                for(int j = 0;j<vec[0].size();j++){
                    vec[i][j] = 0;
                }
            }
       }

       for(int i = 0;i<cols.size();i++){
            if(cols[i]==1){
                for(int j = 0;j<vec.size();j++){
                    vec[j][i] = 0;
                }
            }
       }

    }
};
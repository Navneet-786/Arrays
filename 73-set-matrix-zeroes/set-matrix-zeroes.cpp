class Solution {
public:

void setZeroes(vector<vector<int>>& vec) {
        int col0 = 0;
        int row0 = 0;
        for(int i=  0;i<vec.size();i++){
            if(vec[i][0]==0){
                col0 = 1;
            }
        }
        for(int j = 0;j<vec[0].size();j++){
            if(vec[0][j]==0){
                row0 = 1;
            }
        }
       for(int i = 1;i<vec.size();i++){
        for(int j = 1;j<vec[0].size();j++){
            if(vec[i][j]==0){
                vec[i][0] = 0;
                vec[0][j] = 0;
            }
        }
       }
       //this is time to fill rows and cols zeros
      for(int i = 1;i<vec.size();i++){
        if(vec[i][0]==0){
            for(int j = 1;j<vec[0].size();j++){
                vec[i][j] = 0;
            }
        }
      }
      for(int j = 1;j<vec[0].size();j++){
        if(vec[0][j]==0){
            for(int i = 1;i<vec.size();i++){
                vec[i][j] = 0;
            }
        }
      }
        //make entire first row and col = 0
        if(row0){
            for(int i = 0;i<vec[0].size();i++){
                vec[0][i] = 0;
            }   
        }
        if(col0){
            for(int j = 0;j<vec.size();j++){
                vec[j][0] = 0;
            }
        }
    }
};
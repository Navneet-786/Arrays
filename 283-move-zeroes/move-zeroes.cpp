class Solution {
public:

    void moveZeroes(vector<int>& vec) {
       int i = 0;
        //make sure i points to first zero element
        while(i<vec.size() && vec[i]!=0)i++;
        if(i==vec.size())return;
        int j = i;
        while(j<vec.size()){
            while(j<vec.size() && vec[j]==0)j++;
            if(j==vec.size())break;
            swap(vec[i],vec[j]);
            i++;
            j++;
        }
    }
};
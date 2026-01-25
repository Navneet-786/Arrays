class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i = 0,j = 0;
        int n1 = a.size();
        int n2 = b.size();
        vector<int>ans;
        while(i<n1 && j<n2){
            //if both element are equal
            if(a[i] == b[j]){
                ans.push_back(a[i]);
                i++;
                j++;
                while(i<n1 && a[i]==a[i-1])i++;
                while(j<n2 && b[j] == b[j-1])j++;
            }
            else if(a[i] < b[j]){
                ans.push_back(a[i]);
                i++;
                while(i<n1 && a[i]==a[i-1])i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
                while(j<n2 && b[j] == b[j-1])j++;
            }
        }
        
        while(i<n1){
            ans.push_back(a[i]);
            i++;
            while(i<n1 && a[i]==a[i-1])i++;
        }
        while(j<n2){
            ans.push_back(b[j]);
            j++;
            while(j<n2 && b[j] == b[j-1])j++;
        }
        
        return ans;
        
    }
};
class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        reverse(s.begin(), s.end());
        string ans = "";
        int index = 0;
        while(index< s.size()){
            while(index< s.size() && s[index]=='.')index++;
            string temp = "";
            while(index< s.size() && s[index]!='.'){
                temp += s[index];
                index++;
            }
            if(!temp.empty()){
                reverse(temp.begin(), temp.end());
                ans += temp;
                
                if(index < s.size())
                    ans += ".";
            }
            
        }
        if(!ans.empty() && ans.back() == '.')
            ans.pop_back();
        return ans;
    }
};
class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        if (n == 1 || n == 2){
            return s;
        }
        vector<char> ans;
        string temp = "";
        ans.push_back(s[0]);
        ans.push_back(s[1]);
        for (int i = 2;i<n;i++){
            ans.push_back(s[i]);
            if (s[i] == s[i-1] && s[i] == s[i-2]){
                ans.pop_back();
            }
            
        }
      if (ans.size() == 0){
        return temp;
      }
        for (int i= 0;i<ans.size();i++){
              temp += ans[i];
        }
        return temp;
    }
};
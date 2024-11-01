class Solution {
public:
    string removeStars(string s) {
        int j = -1;
        vector<char > ans;
        for (int i =0;i<s.length();i++){
            if (s[i] != '*'){
                ans.push_back(s[i]);
            }
            else {
                ans.pop_back();
            }
        }
        string temp = "";
        if (ans.size()== 0){
            return temp;
        }
        for (int i=0;i< ans.size();i++){
            temp+= ans[i];
        }
        return temp;
    }
};
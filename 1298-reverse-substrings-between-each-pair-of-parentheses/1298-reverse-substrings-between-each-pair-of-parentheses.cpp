class Solution {
public:
    string reverseParentheses(string s) {
     vector <int> start;
     string temp = "";
     for (int i = 0;i<s.length();i++){
        if (s[i] == '('){
            start.push_back(temp.size());
        }
        else if (s[i] == ')'){
            int ind = start.back();
            start.pop_back();
            reverse(temp.begin()+ ind ,temp.end());
        }
        else {
            temp+= s[i];
        }
     }
     return temp;
    }
};
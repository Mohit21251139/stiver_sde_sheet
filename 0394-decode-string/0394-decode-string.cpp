class Solution {
public:
    string decodeString(string s) {
        string ans = "";
        stack<pair<string,int>> st;
        int cnt = 0;
        for (char ch: s){
            if (ch == '['){
                st.push({ans,cnt});
                ans= "";
                cnt = 0;
            }
            else if (ch == ']'){
                pair<string,int> p = st.top();
                st.pop();
                int t = p.second;
                string temp= "";
                while (t){
                     temp += ans;
                     t--;
                }
                ans  = p.first +  temp ;

            }
            else if (ch <= '9' && ch >= '0'){
                cnt = 10 * cnt + ch -48;
            }
            else {
                ans += ch;
            }
        }
        return ans;
    }
};
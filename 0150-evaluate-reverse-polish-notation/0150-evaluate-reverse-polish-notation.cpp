class Solution {
public:
    int val(int num1, int num2,string s){
        char ch = s[0];
        if (ch == '*'){
            return num1 * num2;
        }
        else if (ch == '+'){
            return num1 + num2;
        }
        else if (ch == '/'){
            return num2 / num1;
        }
        else if(ch == '-'){
            return num2 - num1;
        }
        else {
            return -1;
        }
    }
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;
        for (int i =0 ;i< n;i++){
            if (tokens[i]== "*" || tokens[i] == "-" || tokens[i] == "+" || tokens[i] == "/"){
                int n = st.top();
                st.pop();
                int m = st.top();
                st.pop();
                int res = val(n,m,tokens[i]);
                st.push(res);
            }
            else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
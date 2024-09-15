class Solution {
public:
    int calculate(string s) {
         stack<int> st;
         int res = 0;
         int num = 0;
         int sign = 1;
         for (int i =0;i< s.length();i++){
            if (s[i] == ' '){
                continue;
            }
            if (s[i] >= '0' && s[i] <= '9'){
                num = num*10 +(s[i] -'0');
            }
            else if (s[i] == '-' || s[i] == '+'){
                 res += sign * num;
                 num = 0;
                 sign =( s[i] == '-' ) ? -1:1;
            }
            else if (s[i] == '('){
                st.push(res);
                st.push(sign);
                sign = 1;
                res =0;
            }
                      else if (s[i] == ')') {
                res += sign * num;  // Add the last number within the parentheses
                num = 0;  // Reset current number

                int prevSign = st.top();  // Retrieve the sign before parentheses
                st.pop();
                int prevResult = st.top();  // Retrieve the result before parentheses
                st.pop();
                // Update the result by combining the result inside parentheses
                res = prevResult + prevSign * res;
            }
         }
         if (num != 0 )res += sign * num;
         return res;
    }
};
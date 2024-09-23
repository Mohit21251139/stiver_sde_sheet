class Solution {
      private:
   int oper(int a,int b, string val){
      char ch = val[0];
      if (ch == '*'){
        return a*b;
      }
      else if (ch == '-'){
        return b-a;
      }
      else if (ch == '+'){
        return a+b;
      }
      else if (ch == '/'){
        return b/a;
      }
      else {
        return -1;
      }

   }
public:
 
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0;i<tokens.size();i++){
            if (tokens[i]== "*" || tokens[i] == "-" || tokens[i] == "+" || tokens[i] == "/"){
                   int num1 = st.top();
                   st.pop();
                   int num2 = st.top();
                   st.pop();
                   int newval = oper(num1,num2,tokens[i]);
                   st.push(newval);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();

    }
};
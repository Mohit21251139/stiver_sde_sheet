class Solution {
public:
   string solve(int n){
    if (n == 1){
        return "1";
    }
    // call recursion
    string ans = solve(n-1);
    int len = ans.length();
    int count = 0;
    string result = "";
    for (int i = 0;i< len;i++){
       char ch = ans[i];
       count = 1;
       while (i < len-1 && ans[i] == ans[i+1]){
        count ++;
        i++;
       }
      result += to_string(count) + string(1,ch);
    }
    return result;
   }
    string countAndSay(int n) {
      
         return solve(n);
    }
};
class Solution {
public:
    string longestPalindrome(string s) {
        int left = 0,right = 0;
        int maxi = 0;
        string ans = "";
        for (int i = 0;i<s.length ();i++){
            left = i , right = i;
            while ((left >= 0 && right < s.length()) && s[left] == s[right]){
                if ((right -left +1) > maxi){
                    maxi = right -left +1;
                    ans = s.substr(left , maxi);
                }
                left --;
                right ++;
            }
            left = i,right = i+1;
            while ((left >= 0 && right < s.length()) && s[left] == s[right]){
                if ((right -left +1) > maxi){
                    maxi = right -left +1;
                    ans = s.substr(left,maxi);
                }
                left--;
                right ++;
            }
           
        }
        return ans;
       
    }
};
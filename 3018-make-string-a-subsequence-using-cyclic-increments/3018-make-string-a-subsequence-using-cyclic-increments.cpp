class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
        int i =0;
        int j = 0;
        if (m > n){
            return false;
        }
        while (j<m && i< n){
            if ( str1[i] == str2[j] || str1[i] + 1 == str2[j] || str1[i] == 'z' && str2[j] == 'a'){
                i++;
                j++;
            }
           
            else{
                i++;
            }
        }
  
        return j == m;
    }
};
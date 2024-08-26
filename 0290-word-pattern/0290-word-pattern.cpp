class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int>m1;
        unordered_map<string , int> m2;
        int j = 0;
        for (int i =0;i<pattern.length();i++){
            string word = "";
            for (int z = j;z < s.length();z++){
                if (z == s.length() -1){
                    word += s[z];
                    if (m1[pattern[i]] != m2[word])return false;
                    j = s.length();
                    break;
                }
                else if (s[z] == ' '){
                    if (m1[pattern[i]] != m2[word])return false;
                    m1[pattern[i]] = i+1;
                    m2[word] = i+1;
                    j = z+1;
                    break;
                }
                else{
                    word += s[z];
                }
            }
            if (j == s.length()){
                if (i == pattern.length()-1)return true;
                return false;
            }
        }
        return false; 
    }
};
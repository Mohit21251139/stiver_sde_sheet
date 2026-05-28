class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())return false;
        int count[256] = {0};
        int count1[256] = {0};
        for (int i = 0;i< s.length();i++){
            if (count[s[i]] != count1[t[i]])return false;
            count[s[i]] = i+1;
            count1[t[i]]= i+1;
        }
        return true;
    }
};
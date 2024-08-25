class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if (s.size()!= t.size()){
        return false;
       }
       int sarr[256] = {0};
       int tarr[256] = {0};
       int n = s.size();
       for (int i = 0;i<n;i++){
        if (sarr[s[i]] != tarr[t[i]]){
            return false;
        }
        sarr[s[i]] = i+1;
        tarr[t[i]] = i+1;
       }
       return true;
        
    }
};
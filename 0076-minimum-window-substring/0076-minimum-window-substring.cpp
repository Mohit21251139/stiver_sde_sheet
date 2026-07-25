class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> hash(256,0);
        int st = 0, r = 0, maxi = INT_MAX;
        int ind = -1;
        int cnt = 0;
        for (int i  = 0;i< t.length();i++){
            hash[t[i]]++;
        }   
        while(r<s.length()){
            if (hash[s[r]] > 0 ){
                cnt = cnt +1;
            }
            hash[s[r]]--;
            while(cnt == t.length()){
                if (r - st +1 < maxi){
                    maxi = r - st +1 ;
                    ind = st;
                }
                hash[s[st]] ++;
                if ( hash[s[st]] > 0)cnt --;
                st++;
            }
            r ++;
        }
        return ind == -1 ? "" : s.substr(ind, maxi);
    }
};
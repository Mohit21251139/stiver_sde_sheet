class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> rows(numRows);
        for (int i =0;i<numRows;i++){
            rows[i] = "";
        }
        int i = 0;
        while (i<s.length()){
            for (int ind = 0;ind<numRows && i< s.length();ind ++){
                rows[ind] += s[i++];
            }
            for (int ind = numRows -2 ; ind>0 && i< s.length();ind --){
                rows[ind ] += s[i++];
            }
        }
        string res = "";
        for (auto it : rows){
            res += it;
        }
        return res;
    }
};
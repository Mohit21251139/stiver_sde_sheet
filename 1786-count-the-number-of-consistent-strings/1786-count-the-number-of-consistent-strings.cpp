class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st;
        for (int i = 0;i<allowed.length();i++ ){
            st.insert(allowed[i]);
        }
        int cnt =0;
        for (const auto& word: words ){
            bool isvalue =true;
            for (int i= 0;i< word.size();i++){
                if (st.find(word[i]) == st.end()){
                    isvalue = false;
                    break;
                }
            }
            if (isvalue)cnt++;
        }
        return cnt;
    }
};
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        vector<string> ans;
        for (int j = 0;j<n;j++){
           for (int i =0 ;i<n;i++){
                 if (j== i)continue;
                 if (words[i].find(words[j]) != string::npos ){
                    ans.push_back(words[j]);
                    break;
                 }
           }
        }
        return ans;
    }
};
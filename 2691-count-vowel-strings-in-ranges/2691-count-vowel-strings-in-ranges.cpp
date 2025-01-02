class Solution {
public:
    bool isCheck(char ch){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefix(n+1 , 0);
        for (int i =1 ;i<= n;i++){
            prefix[i] = prefix[i-1] + (isCheck(words[i-1].front())  && isCheck(words[i-1].back()) ? 1: 0  );

        } 
        vector <int> ans;
        for (auto& it: queries){
            ans.push_back(prefix[it[1] + 1] - prefix[it[0]]);
        }
        return ans;
    }
};
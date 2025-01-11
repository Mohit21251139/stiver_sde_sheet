class Solution {
public:
    vector<int> count(string num){
        vector<int> ans(26,0);
        for (auto& it : num){
            ans[it - 'a']++;
        }
        return ans;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int n = words1.size();
        int m = words2.size();
        vector <int> bmax(26,0);
        for (auto& it: words2){
            vector<int> cnt = count(it);
            for (int i= 0;i<26;i++){
               int maxi = max(bmax[i] , cnt[i]);
               bmax[i] = maxi;
            }
             
        }
        vector<string> ans;
         for (auto & it: words1){
            vector<int> cnt = count(it);
            bool istrue = false;
            for (int i=0;i< 26;i++){
                if (cnt[i] < bmax[i]){
                     istrue = true;
                     break;
                }

                
            }
            if (!istrue) ans.push_back(it);
         }
         return ans;
    }
};
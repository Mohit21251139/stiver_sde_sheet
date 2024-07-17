class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mpp;
        for (int i = 0;i<magazine.length();i++){
            mpp[magazine[i]] ++;
        }
        for(char ch: ransomNote){
            if (mpp.find(ch) != mpp.end()){
                if (mpp[ch] > 0){
                    mpp[ch] --;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};
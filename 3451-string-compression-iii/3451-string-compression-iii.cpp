class Solution {
public:
    string compressedString(string word) {

        string comp = "";
        int i = 0;
        int ansInd = 0;
        int n = word.length();

        while(i< n){
            int j = i+1;
            while(j< n && word[i] == word[j]){
                j++;
            }
            int cnt = j-i;
            while(cnt > 9){
                comp += to_string(9);
                cnt = cnt -9;
                comp+= word[i];
            }
            comp += to_string(cnt);
            comp += word[i];
            i = j;

        }
        return comp;
    }
};
class Solution {
public:
    int maximum69Number (int num) {
        string ans = to_string(num);
        for (char &ch : ans){
            if (ch =='6'){
                ch = '9';
                break;
            }
        }
        return stoi(ans);
    }
};
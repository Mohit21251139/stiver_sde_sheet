class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int l1 = str1.length();
        int l2 = str2.length();
        string ans = "";
        if (l1 < l2){
            return gcdOfStrings(str2,str1);
        }
        else if (str1.find (str2) != 0){
            return "";
        }
        else if (str2 == ""){
            return str1;
        }
        else {
                   return gcdOfStrings(str1.substr(str2.length()), str2);
        }
        
    }
};
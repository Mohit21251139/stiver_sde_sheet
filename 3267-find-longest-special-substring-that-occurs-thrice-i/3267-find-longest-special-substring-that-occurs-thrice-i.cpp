class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string,int> mpp;
        for (int start = 0;start<s.length();start++){
            string temp = "";
            for (int end = start;end<s.length();end++){
                if (temp.empty() || temp.back()==s[end]){
                    temp = temp + s[end];
                    mpp[temp] ++;
                }
                else {
                    break;
                }
            }
        }
        int maxi = 0;
        for (auto& [temp, len] : mpp){
            if (len>= 3){
                maxi = max(maxi, (int)temp.length());
            }
        }
        return maxi == 0 ?-1: maxi;
    }
};
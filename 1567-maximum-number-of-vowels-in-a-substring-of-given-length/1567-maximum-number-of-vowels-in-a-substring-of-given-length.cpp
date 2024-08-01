class Solution {
public:
    int maxVowels(string s, int k) {
        int cntvowel = 0;
        int l = 0,r= 0;
        int n= s.length();
        int maxi = 0;
        string ans = "";
        while (r<n){
           ans += s[r];
           if (s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u'){
            cntvowel ++;
           }
           if (r-l+1 == k){
             maxi = max(maxi,cntvowel);
             if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u'){
                cntvowel --;
                
                l++;
             }
             else{
                l++;
             }
             
           }
           r++;
        }
        return maxi;
    }
};
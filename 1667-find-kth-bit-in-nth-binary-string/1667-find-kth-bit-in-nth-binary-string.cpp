class Solution {
public:
    char findKthBit(int n, int k) {
        if (n == 1){
            return '0';
        }
        string num = "0";
        while(n!=1){
            string temp = num;
            for (char &ch: temp){
                ch ^= '0' ^ '1'; 
            }
         reverse(temp.begin(),temp.end());
         num += "1" + temp;
             n--;
        }
        char ch = num[k-1];
        return ch;
    }
};
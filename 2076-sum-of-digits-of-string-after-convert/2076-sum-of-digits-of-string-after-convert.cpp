class Solution {
public:
    int getLucky(string s, int k) {
           int c = 0;
        
        // Convert each character to its numeric equivalent and sum the digits
        for (char i : s) {
            int x = i - 'a' + 1;
            while (x > 0) {
                c += x % 10;
                x /= 10;
            }
        }

        // Perform the reduction step k-1 times
        while (--k > 0 && c > 9) {
            int y = 0;
            while (c > 0) {
                y += c % 10;
                c /= 10;
            }
            c = y;
        }
        
        return c;
    }
};
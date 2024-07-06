class Solution {
public:
    int passThePillow(int n, int time) {
        int extra = n-1;
        int round = time/extra;
        int rem = time%extra;
        if (round %2 == 0)return rem +1;
        else {
           return  n-rem ;
        }
    }
};
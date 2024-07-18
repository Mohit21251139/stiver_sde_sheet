// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    
    int firstBadVersion(int n) {
        int m = 0;
        for (int i = 1;i<=n;i++){
            if (isBadVersion(i)){
                m =  i;
                break;
            }
            else{
                continue;
            }
        }
        return m;
    }
};
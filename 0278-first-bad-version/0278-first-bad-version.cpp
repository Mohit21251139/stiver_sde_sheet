// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    
    int firstBadVersion(int n) {
        //t.c =0(n)
        // int m = 0;
        // for (int i = 1;i<=n;i++){
        //     if (isBadVersion(i)){
        //         m =  i;
        //         break;
        //     }
        //     else{
        //         continue;
        //     }
        // }
        // return m;
        
        //BINARY SEARCH
        //T.C=0(logn)
        long long l = 0,r= n;
        long long m = 0;
        while (l<=r){
           long long  mid = l+(r-l)/2;
           if (isBadVersion(mid)){
            m = mid;
            r= mid - 1;
           }
           else{
            l = mid +1;
           }
        }
        return m;
        
    }
};
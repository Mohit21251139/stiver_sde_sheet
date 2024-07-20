class Solution {
    #define ll long long
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
       ll l = 1;
       ll r = 1e14;
       while (l<=r){
        ll mid = l + (r-l)/2;
        ll total = 0;
        for ( int i = 0;i< time.size();i++){
           total+= mid /time[i];
        }
        if (total < totalTrips){
            l = mid +1;
        }
        else{
            r = mid -1;
        }
       }
       return l;
    }
};
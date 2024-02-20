class Solution {
    private:
    bool possible(vector<int>& bloomDay,int day, int m, int k){
        int cnt = 0;
        int no = 0;
        for (int i = 0;i<bloomDay.size();i++){
            if (bloomDay[i] <= day){
                cnt ++;
            }
            else {
                no += (cnt/k);
                cnt =0;
            }
        }
         no += (cnt/k);
        return no >= m;
        
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m*1LL *k*1LL;
        int n =  bloomDay.size();
        if (n< (val)){
            return -1;
        }
        int mini = INT_MAX,maxi = INT_MIN;
        for (int i = 0;i<n;i++){
            maxi = max(maxi,bloomDay[i]);
            mini = min(mini,bloomDay[i]);
        }
        int low = mini,high = maxi;
        while (low<= high){
            int mid = (low +high)/2;
            if (possible(bloomDay,mid,m,k) ){
                high = mid -1;
            }
            else {
                low = mid +1;
            }
        }
        return low ;
    }
};
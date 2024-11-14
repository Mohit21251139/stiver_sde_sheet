class Solution {
public:
    bool sol(int n ,int mid ,vector<int>& num){
        int ans = 0;
        for(auto it : num){
            ans += (it / mid);
            if(it%mid)ans ++;
            if (ans > n)return 0;
        }
        return ans <= n;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int left = 1;
        int ans = 0;
        int right = *max_element(quantities.begin(),quantities.end());
        while (left<= right){
            int mid = left +(right -left)/2;
            if (sol(n,mid,quantities)){
                ans = mid;
                right = mid -1;
            }
            else{
                left = mid +1;
            }
        }
        return ans;
    }
};
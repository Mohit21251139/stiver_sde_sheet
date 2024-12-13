class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> pq;
        int n = nums.size();
        vector<bool> vis(n,false);
        for (int i = 0;i<n;i++){
            pq.push({nums[i],i});
        }
        long long ans = 0;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int temp = it.first;
            int ind = it.second;
            if (vis[ind]){
                continue;
            }
            ans += temp;
            vis[ind] = true;
            if (ind - 1 >=0){
              vis[ind -1] = true;
            } 
            if (ind + 1 < n){
                vis[ind + 1] = true;
            }
        }
        return ans;
    }
};
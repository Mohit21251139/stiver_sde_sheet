class Solution {
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        if (n < 2)return 1;
        vector<vector<int>> adj(n);
        vector<int> indegree(n);
        for (auto& it: edges){
              int first = it[0];
              int second = it[1];
              adj[first].push_back(second);
              adj[second].push_back(first);
              indegree[first]++;
              indegree[second] ++;
        }
        queue<int> q;
        for (int i =0;i< n;i++){
            if (indegree[i] == 1)q.push(i);
        }
        int ans =0;
        vector<long long > nodeval(values.begin(),values.end());
        while (!q.empty()){
            int val = q.front();
            q.pop();
            indegree[val] --;
            long long curr =  (nodeval[val]%k == 0) ? 0 : nodeval[val];
            if (curr ==0){
                ans ++;
            }
            for (auto& it: adj[val]){
                if (indegree[it] > 0){
                    indegree[it] --;
                    nodeval[it] +=  curr;
                    if (indegree[it] == 1)q.push(it);
                }
            }
        }
        return ans;
    }
};
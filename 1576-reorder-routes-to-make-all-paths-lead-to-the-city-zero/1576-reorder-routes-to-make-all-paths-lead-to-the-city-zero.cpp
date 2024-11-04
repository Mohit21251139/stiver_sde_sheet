class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        vector<int> revadj[n];
        vector<int> vis(n,0);
        for (auto i:connections ){
            adj[i[0]].push_back(i[1]);
            revadj[i[1]].push_back(i[0]);
        }
        int cnt = 0;
        queue<int> q;
        q.push(0);
        vis[0] = 1;
        while(!q.empty()){
            int l = q.size();
            while (l--){
                int node = q.front();
                q.pop();
                for (auto x: adj[node]){
                    if (!vis[x]){
                        vis[x] = 1;
                        cnt ++;
                        q.push(x);
                    }
                }
                for (auto x: revadj[node]){
                    if (!vis[x]){
                        vis[x]= 1;
                        q.push(x);
                    }
                }
            }
        }
        return cnt;
    }
};
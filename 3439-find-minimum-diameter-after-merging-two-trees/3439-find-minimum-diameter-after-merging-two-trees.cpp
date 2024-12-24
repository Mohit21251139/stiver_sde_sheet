class Solution {
public:
   pair<int,int> sol( int n,vector<vector<int>> & edges ){
     if (n <=2) return {n-1,n-1};
     vector< int> indeg(n,0);
     vector<vector<int>> adj(n);
     for (auto& it: edges){
        int u = it[0], v = it[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
        indeg[u]++;
        indeg[v]++;
     }
     queue<int> q;
     for (int i =0;i< n;i++){
        if (indeg[i] == 1)q.push(i);
     }
     int level= 0;
     int height =0;
     while (!q.empty()){
        int m = q.size();
        for (int i =0;i< m;i++){
            int curr = q.front();
            q.pop();
            for (auto& neigh: adj[curr]){
                indeg[neigh]--;
                if (indeg[neigh]== 1)q.push(neigh);

            }

        }
        level= m;
        height ++;
     }
     height --;
     int dia = 2* height;
     if (level >1){
        height ++;
        dia++;
     }
     return {height,dia};
   }
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        pair<int,int> fir = sol(edges1.size() +1 , edges1);
        pair<int,int> sec = sol(edges2.size() +1 , edges2);
        return max(max(fir.second,sec.second), fir.first + sec.first +1);
    }
};
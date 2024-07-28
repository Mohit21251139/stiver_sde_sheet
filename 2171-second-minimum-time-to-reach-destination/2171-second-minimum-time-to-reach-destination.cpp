class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        unordered_map<int, list<int>> mpp;
        for (auto& it:edges){
            mpp[it[0]].push_back(it[1]);
            mpp[it[1]].push_back(it[0]);
        }
        priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,1});
        vector<int> unique(n+1,0);
        vector<int> dis(n+1,-1);
        while (!q.empty()){
            int node = q.top().second;
            int d = q.top().first ;
            q.pop();
            if (dis[node] ==d || unique[node] >= 2 )continue;
            unique[node]++;
            dis[node] = d;
            if (node == n && unique[node] == 2){
                return dis[node];
            }
            if ( (d/change) % 2 != 0){
                d = (d/change +1)* change;
            }
            for (int it : mpp[node]){
                q.push({d+ time,it});
            }
        }
        return -1;
    }
};
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        
        vector <pair <int ,int >> adj[n];
        for (auto it: edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});

        }

             priority_queue<pair<int,int>,vector<pair<int,int>>,
          greater<pair<int,int>>> pq;
          
        
         int countcity = n;
         int cityno= -1;

         for (int i = 0;i< n;i++){
             vector <int> dist(n,1e9);

               pq.push({0,i});
               dist[i] = 0;

               while (!pq.empty()){
                   auto it = pq.top();
                   pq.pop();
                   int dis = it.first;
                   int node = it.second;

                   for (auto it: adj[node]){
                       int adjnode = it.first;
                       int wgh = it.second;
                      
                      if (wgh + dis < dist[adjnode] ){
                          dist[adjnode] = wgh + dis;
                          pq.push({wgh+ dis,adjnode});
                      }

                   }
 
               }

               int cnt = 0;

               for (int i = 0;i< n;i++){
                   if (dist[i] <=distanceThreshold ){
                       cnt ++;
                   }
               }
               if (cnt <= countcity){
                   countcity = cnt;
                   cityno = i;
               }
         }

    return cityno;
    }
};
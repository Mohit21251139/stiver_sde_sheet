class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> indegree(n,0);
        for (int i = 0;i< edges.size();i++){
            int ind = edges[i][1];
            indegree[ind] ++;

        }
        int cnt = 0;
        int ans = -1;
        for (int i =0;i<n;i++){
            if (indegree[i] ==0){
cnt++;
ans = i;
            }
            if (cnt == 2)return -1;
            
        }
        return ans;


    }

};
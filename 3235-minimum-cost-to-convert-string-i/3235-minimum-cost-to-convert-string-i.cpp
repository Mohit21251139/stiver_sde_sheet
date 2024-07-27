class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector <vector<int>> dis(26,vector<int> (26,1e9));
        for (int i = 0;i<26;i++)dis[i][i] =0;
        for (int i = 0;i< original.size();i++){
            dis[original[i] - 'a'][changed[i] -'a'] = min(dis[original[i] -'a'][changed[i] -'a'],cost[i]);

        }
        for (int k = 0;k<26;k++){
            for (int i = 0;i< 26;i++){
                for (int j = 0;j<26;j++){
                    if (dis[i][k] != 1e9 || dis[k][j] != 1e9){
                        dis[i][j] = min(dis[i][j] , dis[i][k]+dis[k][j]);
                    }
                }
            }
        }
        long long cos = 0;
        for (int i = 0;i < source.size();i++){
            if (dis[source[i] - 'a'][target[i] -'a'] == 1e9 )return -1;
            cos += dis[source[i] -'a'][target[i] - 'a'];
        }
        return cos;
     }
};
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
      
        int cnt = 0;
        for (auto& it: details){
           if (it[11] - '0' > 6){
            cnt ++;
           }
            if (it[11] - '0' ==6 && it[12] -'0' >0){
            cnt ++;
           }
        

        }
        return cnt;
    }
};
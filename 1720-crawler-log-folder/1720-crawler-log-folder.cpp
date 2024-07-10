class Solution {
public:
    int minOperations(vector<string>& logs) {
    
        int main = 0;
        int count = 0;
        for (int i = 0;i< logs.size();i++){
            if (logs[i] != "./" && logs[i] != "../"){
                count ++;
            }
            else if (logs[i] == "../"){
                if (count > main){
                    count --;
                }
                else{
                    count = 0;
                }
            }
            else {
                continue;
            }
        } 
        if (count > main){
            return count -main;
        }
        return count;
    }
};
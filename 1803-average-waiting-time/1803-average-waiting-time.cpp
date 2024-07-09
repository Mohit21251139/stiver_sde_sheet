class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        if (customers.size() == 1)return customers[0][1];
        double workC = 0;
        double waiting = 0;
        for (int i = 0;i< customers.size();i++){
            
               

           if (customers[i][0] < workC){
            workC += customers[i][1];
            waiting += workC - customers[i][0];
           }
           else {
           
            workC = customers[i][0] + customers[i][1];
            waiting += customers[i][1]; 
           }

           
        }
        int n = customers.size();
        return  waiting / (double) n;
    }
};
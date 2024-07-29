class Solution {
public:
    
    int numTeams(vector<int>& rating) {
        int ans = 0;
        for (int i= 1;i< rating.size()-1 ;i++){
            int leftsmall = 0,rightgreater = 0;
            for (int j= 0;j<i;j++){
                if (rating[j] < rating[i]){
                    leftsmall+= 1;
                }
            }
            for (int j = i+1;j< rating.size();j++){
                if (rating[j] > rating[i]){
                    rightgreater+= 1;
                }
            }
            ans += leftsmall* rightgreater;
            int leftlarger = i - leftsmall ;
            int rightsmaller = rating.size() - i - 1 - rightgreater;
            ans += leftlarger *rightsmaller;
        }
        return ans;
        
    }
};
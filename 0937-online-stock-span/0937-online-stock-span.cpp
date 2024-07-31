class StockSpanner {
public:
    vector<int> ans;
    StockSpanner() {
        
    }
    
    int next(int price) {
       
        ans.push_back(price);
        long long n = ans.size();
        long long  cnt = 0;
        for (int i= n-1;i>= 0;i--){
             if (ans[i] <= price){
                cnt ++;
             }
             else{
                break;
             }
        }
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
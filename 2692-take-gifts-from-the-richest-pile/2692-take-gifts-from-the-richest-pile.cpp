class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> q(gifts.begin(),gifts.end());
        long long ans = 0;
        while(!q.empty()){
            long long num = q.top();
            q.pop();
            if (k > 0){
              long long temp = floor(sqrt(num));
              q.push(temp);
              k--;
              continue;
            }
            ans += num;
            
         }
         return ans;
      
    
    }
};
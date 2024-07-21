class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector <int> ans = prices;
        stack <int> st;
        st.push(prices[n-1]);
        for (int i = n-2;i>= 0;i--){
            if (!st.empty() && st.top()<= prices[i]){
                int top = st.top();
                ans[i] = prices[i] - st.top();
                st.push(prices[i]);
            }
            else{
                while (!st.empty() && st.top()>prices[i] )st.pop();
                if (st.empty()){
                    st.push(prices[i]);

                }
                else{
                    ans[i] = prices[i] - st.top ();
                    st.push(prices[i]);
                }
            }
        }
        return ans;
    }
};
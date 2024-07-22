class Solution {
    public:
    const int mod = 1e9+7;
    private: 
    vector<int> NSE(vector<int>& arr){
        stack <int> st;
        int n = arr.size();
        vector<int> ans(n);
        for (int i = n-1;i>=0;i--){
            while (!st.empty () && arr[st.top()] >= arr[i])st.pop();
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;

    }
    vector <int> PSEE(vector<int>& arr){
        int n = arr.size();
        stack<int> st;
        vector <int> ans(n);
        for (int i = 0;i<n;i++){
            while (!st.empty() && arr[st.top ()] > arr[i]) {
                st.pop();
            }
            ans[i] = st.empty()? -1: st.top();
            st.push(i);
        }
        return ans;
    }
public:
   
    int sumSubarrayMins(vector<int>& arr) {
        vector <int> nse = NSE(arr);
        vector <int> psee = PSEE(arr);
        int total = 0;
        for (long i= 0;i<arr.size();i++){
            long  left = i - psee[i];
            long right = nse[i] -i;
            total = (total + (right * left *arr[i])%mod)%mod;

        }
        return total;
    }
};
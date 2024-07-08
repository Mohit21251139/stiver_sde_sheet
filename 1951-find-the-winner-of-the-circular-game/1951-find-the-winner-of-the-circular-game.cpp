class Solution {
public:
    int findTheWinner(int n, int k) {
        // queue<int> st;
        // for(int i = 1;i<=n;i++)st.push(i);
        // while (st.size()!= 1){
        //     for (int i = 0;i<k-1;i++){
        //         int elem = st.front();
        //         st.pop();
        //         st.push(elem);
        //     }
        //     if (st.size() == 1)break;
        //     st.pop();
        // }
        // return st.front();

        //CP solution
        int cnt = 1;
        for (int i =1;i<= n;i++){
            cnt = (cnt + k)%i;
        }
        return cnt +1;
    }
};
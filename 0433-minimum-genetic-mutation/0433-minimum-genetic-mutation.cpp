class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set<string> st;
        queue<pair<string,int>> q;
        for (auto& it:bank){
            st.insert(it);
        }
        q.push({startGene,0});
        if (st.find(endGene) == st.end()){
            return -1;
        }
        vector<char> num;
        num.push_back('A');
        num.push_back('C');
        num.push_back('G');
        num.push_back('T');
        
        while (!q.empty()){
            string temp = q.front().first;
            int ans = q.front().second;
            q.pop();
            if (temp == endGene){
                return ans;
            }
            for (int i = 0;i<temp.size();i++){
                string s2 = temp;
                for (char ch: num){
                     temp[i] = ch;
                     if (st.find (temp) != st.end()){
                        q.push({temp,ans +1});
                        st.erase(temp);
                     }
                }
                temp = s2;
                
            }

        }
        return -1;
    }
};
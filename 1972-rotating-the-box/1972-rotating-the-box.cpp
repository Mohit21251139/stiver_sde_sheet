class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int place =0;
        int n = box.size();
        int m = box[0].size();
        for (int i = 0;i<n;i++){
              int place = m-1;
                for (int j = m-1;j>=0;j--){
                    if (box[i][j] == '*'){
                        place = j -1 ;
                        
                    }
                    else if (box[i][j] == '#'){
                         swap(box[i][j],box[i][place]);
                         place = place -1;
                    }
                }
        }
        vector<vector<char>> ans;
        for (int i =0 ;i<m;i++){
            vector<char> temp;
            for (int j = 0;j<n;j++){
                temp.push_back(box[j][i]);
            }
            reverse(temp.begin(),temp.end());
            ans.push_back(temp);
        }
        return ans;
    }
};
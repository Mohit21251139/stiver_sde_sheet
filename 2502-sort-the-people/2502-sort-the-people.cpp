class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> mpp;
          int n = heights.size();
           for (int i = 0;i<names.size();i++){
            mpp[heights[i]] = names[i];
        }
        sort(heights.begin(),heights.end());
      
     
        vector <string> ans;
       for (int i=n-1;i>= 0;i-- ){
           
            ans.push_back(mpp[heights[i]]);
       }
       return ans;
    }
};
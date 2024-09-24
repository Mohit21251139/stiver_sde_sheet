class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<string,int> mpp;
       string temp = "";
       for (int num: arr2){
          string var = to_string(num);
          for (char i:var){
            temp += i;
            mpp[temp] ++;
          }
          temp = "";
       }
       int maxi =0;
        
        for (auto& it: arr1){
             string num = to_string(it);
             for (auto& i:num){
                temp+= i;
                if (mpp.find (temp) != mpp.end()){
                    maxi = max(maxi, static_cast<int>(temp.length()));
                }
             }
             temp ="";
        }
        return maxi ;
    }
};
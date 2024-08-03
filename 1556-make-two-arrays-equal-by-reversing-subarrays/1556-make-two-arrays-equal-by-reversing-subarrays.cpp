class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n = arr.size();
       unordered_map<int ,int> mpp;
        for (int i = 0;i<n;i++){
            mpp[arr[i]] ++;
        }
        for (int i= 0;i<n;i++){
            mpp[target[i]]--;
        }
        for(auto& it: mpp){
   
            if ( it.second>0 ){
                return false;
            }
        }
        return true;

    }
};
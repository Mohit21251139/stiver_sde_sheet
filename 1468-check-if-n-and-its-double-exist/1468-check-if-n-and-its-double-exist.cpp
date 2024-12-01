class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> mpp;
        for (int i= 0;i<arr.size();i++){
            if (mpp.count (arr[i] *2) || (arr[i]% 2 == 0 && mpp.count(arr[i]/2)  ))return true;
            mpp.insert(arr[i]);
        }
       
        return false;
    }
};
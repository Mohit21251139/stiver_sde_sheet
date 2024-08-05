class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mpp;
        for (int i= 0;i< arr.size();i++){
            mpp[arr[i]] ++;
        }
        for (int i = 0;i<arr.size() ;i++){
            string ele = arr[i];
            if (mpp[ele] == 1){
                k--;
                 if (k==0){
                    return ele;
                 }
            }
        }
        return "";
    }
};
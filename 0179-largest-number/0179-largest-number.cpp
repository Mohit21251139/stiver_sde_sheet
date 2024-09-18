class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for (int i = 0;i<nums.size();i++){
            arr.push_back(to_string(nums[i]));
        }
        sort(arr.begin(),arr.end (),[](const string& a,const string& b){
            return (b+a) < (a+b);
        });

        if (arr[0] == "0"){
            return "0";
        }
        string ans = "";
        for (auto& it: arr){
            ans += it;
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
      int n = nums.size();
      vector<pair<int,int>> mpp(n);
      for (int i= 0;i<n;i++){
        int num  = nums[i] ;
        string a= "";
        if (num == 0){
            a = to_string(mapping[0]);
        }
        else{
            while (num >0){
                int digit = num%10;
                a = to_string(mapping[digit])+a;
                num = num/10 ;
            }
        }
        int digit = stoi(a);
        mpp[i] = {digit,i}; 
      }
      sort(mpp.begin(),mpp.end());
      vector <int> ans;
      for (auto& v: mpp){
        ans.push_back(nums[v.second]);
      }
      return ans;
    }
};
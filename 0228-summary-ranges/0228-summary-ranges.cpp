class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.size() == 0){
            return {};
        }

        int cnt = nums[0];
        int s = nums[0];
        int e = nums[0];
        vector<string>ans;
        
        for (int i= 1;i<nums.size();i++){
           
           if (cnt +1 == nums[i]){
            e ++;
            cnt ++;
      
           }
           else {
            string st = "";
            if (s != e){
                st += to_string(s) + "->" + to_string(e);
                ans.push_back(st);
            }
            else{
                st = to_string(s);
                ans.push_back(st);
            }

            s = nums[i];
            e = nums[i];
            cnt = nums[i];

           }
         
        }
        string st = "";
        if (s != e){
                st += to_string(s) + "->" + to_string(e);
                ans.push_back(st);
            }
            else{
                        st = to_string(s);
                ans.push_back(st);
            }
        return ans ;
    }
};
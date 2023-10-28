class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>  p ;
         unordered_map<int,int>  pa;
        vector <int> ans;
        
        for (int i = 0;i<nums1.size();i++){
            p[nums1[i]]++;
        }
        for(int i = 0;i<nums2.size();i++){
            if (p.find(nums2[i]) != p.end()){
               pa[nums2[i]]++;
               
            }
             
        }
        for(auto i: pa ){
            ans.push_back(i.first);
        }
        return ans;
    }
};
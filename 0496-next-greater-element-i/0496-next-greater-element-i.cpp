class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
           stack<int > st;
           int n = nums1.size();
           
           unordered_map<int ,int> mp;
           int m = nums2.size();
        for(int i =m-1;i>= 0;i--){
          
            
                while (!st.empty() && st.top()<= nums2[i]){
                    st.pop();
                }
                if (st.empty())mp[nums2[i]] = -1;
                else{
                           mp[nums2[i]]= st.top();
                }
         
                st.push(nums2[i]);
        
        }
        vector <int> ans(n);
        for (int i = 0;i<n;i++){
            ans[i] = mp[nums1[i]];
        }
        return ans;
      
    }
};
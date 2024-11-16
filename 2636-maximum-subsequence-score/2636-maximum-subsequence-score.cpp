class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        long long ans = 0,sum= 0;
        priority_queue<int ,vector<int>, greater<int>> pq;
        vector<pair <int ,int>> temp;
        for (int i =0;i<nums1.size();i++){
            temp.push_back({nums2[i],nums1[i]});
        }
        sort(temp.rbegin(),temp.rend());
        for (int i =0;i< nums1.size();i++){
            sum += temp[i].second;
            pq.push(temp[i].second);

            while(pq.size() == k){
                ans = max(ans,sum*temp[i].first);
                sum -= pq.top();
                pq.pop();
            }
        }
        return ans ;
    }
};
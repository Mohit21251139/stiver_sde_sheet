class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> start ;
        int n = intervals.size();
        vector<int> end;
        for (int i =0;i<n;i++){
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int grp = 0;
        int i = 0,j =0;
        int ans =0;
        while (i< n){
            if (start[i] <= end[j]){
                grp ++;
                i++;
            }
            else {
                grp --;
                j++;
            }
            ans = max(ans,grp);
        }
        return ans;
    }
};
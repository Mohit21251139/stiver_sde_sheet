class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxScore = 0;
        int leftMaxScore = values[0] + 0;
        int n = values.size();
        for (int i =1 ;i< n;i++){
            maxScore = max(maxScore , leftMaxScore + values[i] - i);
            leftMaxScore = max(leftMaxScore, values[i] + i);
        }
        return maxScore;
    }
};
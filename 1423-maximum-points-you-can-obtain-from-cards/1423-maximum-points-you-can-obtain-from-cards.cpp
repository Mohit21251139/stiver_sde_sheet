class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l = 0 , r  = 0, maxSum = 0;
        for (int i = 0; i< k ;i++){
            l = l + cardPoints[i];
        }
        maxSum = max(maxSum, l );
        int rightInd = cardPoints.size()-1;
        for (int i = k -1;i>= 0 ;i--){
            l = l - cardPoints[i];
            r = r + cardPoints[rightInd];
            maxSum = max(maxSum , r+l);
            rightInd = rightInd -1;

        }
        
        return maxSum;
    }
};
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int curr = 0;
        int precurr = 0 ;
        int cnt = 0;
        for (int i =0;i<arr.size();i++){
            curr += arr[i];
            precurr += i;
            if (curr == precurr){
                cnt ++;

            }

        }
        return cnt == 0? 1: cnt;
    }
};
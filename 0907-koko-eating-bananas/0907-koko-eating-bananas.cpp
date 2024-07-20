class Solution {
    private:
    int findMax(vector <int>& piles){
        int maxi = INT_MIN;
        int n = piles.size();
        for (int i = 0;i<n;i++){
            maxi = max(maxi,piles[i]);
        }
        return maxi;
    }
    long long totalhrs(vector<int>& piles ,int hrs){
        long long  totalhrs = 0;
        int n = piles.size();
        for (int i = 0;i< n;i++){
            totalhrs += ceil((double)piles[i]/(double)hrs);
        }
        return totalhrs;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        long long low = 1,high =findMax(piles);
        while(low <= high){
            long long mid = low + (high -low)/2;
            long long  hrs = totalhrs(piles,mid);
            if (hrs<= h){
                high = mid -1;
            }
            else{
                low = mid +1;
            }
        }
        return low;
    }
};
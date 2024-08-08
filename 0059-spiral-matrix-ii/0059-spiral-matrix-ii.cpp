class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int row = n;
        int col = n;
        int startingrow = 0;
        int startingcol = 0;
        int endingrow = row-1;

        int endingcol = col -1;

        int count = 1;
        vector<vector<int>> ans(n,vector <int>(n));
        int total = n*n;

        while ( count <= total){
            //first row filled
            for (int index = startingcol; count<=total && index<=endingcol; index++){
                ans[startingrow][index] = count;
                count ++;
             }
             startingrow++;
             //last col filled
             for (int index = startingrow; count<= total && index<= endingrow;index++){
                ans[index][endingcol] = count;
                count ++;
             }
             endingcol--;
             //last row filled 
             for (int i = endingcol ; count<= total&& i >=startingcol;i-- ){
                ans[endingrow][i] = count;
                count ++;

             }
             endingrow--;
             //first col filled
             for (int i =endingrow;count<= total && i >= startingrow;i-- ){
                ans[i][startingcol] = count;
                count ++;
             }
             startingcol++;
        }
        
        return ans;

    }
};
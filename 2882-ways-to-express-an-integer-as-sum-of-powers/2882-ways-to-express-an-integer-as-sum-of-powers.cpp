class Solution {
    int a = 1e9+7;
    int arr[301][301];
    private:
    int solve(int n, int num,int x ){
        if (n == 0 )return 1;
        if (n < 0 )return 0;
        int power = pow(num,x);

        if (power > n)return 0;
        if (arr[n][num] != -1)return arr[n][num];

        int take = solve(n - power, num +1 , x);
        int ntake = solve(n, num +1 ,x);
        return arr[n][num] =  (take + ntake)%a;
    }
public:
    int numberOfWays(int n, int x) {
        memset(arr,-1,sizeof(arr));
    return solve(n,1,x);

    }
};
int perfectSum(int arr[], int n, int sum)
{
    // this solution will give wrong ans when 0 is present in given array.
    // int dp[n+1][sum+1];
    // memset(dp,0,sizeof(dp));
    // for(int j = 0; j<sum+1;j++){
    //     dp[0][j] = 0;
    // }
    // for(int i=0;i<n+1;i++){
    //     dp[i][0] = 1;
    // }

    // for(int i=1; i<n+1;i++){
    //     for(int j=1;j<sum+1;j++){
    //         if(arr[i-1] <= j){
    //             dp[i][j] = (dp[i-1][j]) + (dp[i-1][j-arr[i-1]]);
    //         }
    //         else{
    //             dp[i][j] = dp[i-1][j];
    //         }
    //     }
    // }
    // return dp[n][sum];

    int mod = 1e9 + 7;
    int dp[n + 1][sum + 1];
    memset(dp, 0, sizeof(dp));
    for (int j = 0; j < sum + 1; j++)
    {
        dp[0][j] = 0;
    }

    dp[0][0] = 1;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = ((dp[i - 1][j]) % mod + (dp[i - 1][j - arr[i - 1]]) % mod) % mod;
            }
            else
            {
                dp[i][j] = (dp[i - 1][j]) % mod;
            }
        }
    }
    return (dp[n][sum]) % mod;
}
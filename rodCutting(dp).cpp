int cutRod(int price[], int n)
{
    int dp[n + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n + 1; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (i <= j)
            {
                dp[i][j] = max(dp[i - 1][j], price[i - 1] + dp[i][j - i]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][n];
}
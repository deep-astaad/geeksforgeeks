int minDifference(int arr[], int n)
{
    // Your code goes here
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int dp[n + 1][(sum / 2) + 1];
    for (int j = 0; j < (sum / 2) + 1; j++)
    {
        dp[0][j] = false;
    }
    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = true;
    }
    dp[0][0] = true;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < (sum / 2) + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    for (int j = sum / 2; j >= 0; j--)
    {
        if (dp[n][j] == true)
        {
            return sum - 2 * j;
        }
    }
    return sum;
}
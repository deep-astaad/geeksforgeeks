int equalPartition(int N, int arr[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    if (sum % 2 == 1)
    {
        return 0;
    }
    int dp[N + 1][(sum / 2) + 1];
    for (int i = 0; i < N + 1; i++)
    {
        for (int j = 0; j < (sum / 2) + 1; j++)
        {
            if (i == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < N + 1; i++)
    {
        for (int j = 0; j < (sum / 2) + 1; j++)
        {
            if (j == 0)
            {
                dp[i][j] = 1;
            }
        }
    }
    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < (sum / 2) + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = (dp[i - 1][j]) || (dp[i - 1][j - arr[i - 1]]);
            }
            else
            {
                dp[i][j] = (dp[i - 1][j]);
            }
        }
    }
    if (dp[N][(sum / 2)] == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
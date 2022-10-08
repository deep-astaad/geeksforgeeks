class Solution
{
public:
    int countMin(string str)
    {
        // complete the function here
        string x = str;
        reverse(str.begin(), str.end());
        string y = str;
        int n = str.size();
        int m = n;
        int dp[n + 1][m + 1];
        for (int i = 0; i < n + 1; i++)
        {
            dp[i][0] = 0;
        }
        for (int i = 0; i < m + 1; i++)
        {
            dp[0][i] = 0;
        }

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                if (x[i - 1] == y[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        }
        return n - dp[n][m];
    }
};
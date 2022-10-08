class Solution
{
public:
    // Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        int dp[m + 1][n + 1];
        for (int i = 0; i < m + 1; i++)
        {
            dp[i][0] = 0;
        }
        for (int i = 0; i < n + 1; i++)
        {
            dp[0][i] = 0;
        }

        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (X[i - 1] == Y[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        }
        return X.size() + Y.size() - dp[m][n];
    }
};
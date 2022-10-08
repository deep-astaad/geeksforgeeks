class Solution
{
public:
    int longestPalinSubseq(string A)
    {
        string X = A;
        reverse(A.begin(), A.end());
        string Y = A;
        int n = X.size();
        int m = Y.size();
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
        return dp[n][m];
    }
};
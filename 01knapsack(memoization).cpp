class Solution
{

public:
    int t[1002][1002];
    Solution()
    {
        memset(t, -1, sizeof(t));

        // for(int i=0;i<1002;i++){
        //     for(int j=0;j<1002;j++){
        //         t[i][j] = -1;
        //     }
        // }
    }

    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n)
    {
        if (n == 0 || W == 0)
        {
            return 0;
        }
        if (t[n][W] != -1)
        {
            return t[n][W];
        }
        if (wt[n - 1] > W)
        {
            return t[n][W] = knapSack(W, wt, val, n - 1);
        }
        if ((knapSack(W, wt, val, n - 1) > (val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1))))
        {
            return t[n][W] = (knapSack(W, wt, val, n - 1));
        }
        else
        {
            return t[n][W] = (val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1));
        }
    }
};
class Solution
{
public:
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n)
    {
        if (n == 0 || W == 0)
        {
            return 0;
        }
        if (wt[n - 1] > W)
        {
            return knapSack(W, wt, val, n - 1);
        }
        if ((knapSack(W, wt, val, n - 1) > (val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1))))
        {
            return (knapSack(W, wt, val, n - 1));
        }
        else
        {
            return (val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1));
        }
    }
};
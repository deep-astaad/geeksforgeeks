// giving segmentation fault.

class Solution
{
public:
    bool sol[101][100001];
    Solution()
    {
        memset(sol, -1, sizeof(sol));
    }
    bool ans(vector<int> arr, int sum, int n)
    {
        if (sum == 0)
        {
            return sol[n][sum] = true;
        }
        if (n == 0)
        {
            return sol[n][sum] = false;
        }
        if (sol[n][sum] != -1)
        {
            return sol[n][sum];
        }
        else
        {
            if (arr[n - 1] > sum)
            {
                return sol[n][sum] = ans(arr, sum, n - 1);
            }
            return (sol[n][sum] = (ans(arr, sum, n - 1) || ans(arr, sum - arr[n - 1], n - 1)));
        }
    }
    bool isSubsetSum(vector<int> arr, int sum)
    {
        // bool static sol[n+1][sum+1];
        // memset(sol, -1, sizeof(sol));
        return ans(arr, sum, arr.size());
    }
};
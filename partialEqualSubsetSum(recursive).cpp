//TLE after 23 cases

class Solution
{
public:
    int ans(int N, int arr[], int sum1, int sum2)
    {
        if (N == 0)
        {
            if (sum1 == sum2)
            {
                return 1;
            }
            return 0;
        }
        return (ans(N - 1, arr, sum1 + arr[N - 1], sum2) || ans(N - 1, arr, sum1, sum2 + arr[N - 1]));
    }
    int equalPartition(int N, int arr[])
    {
        int sum1 = 0;
        int sum2 = 0;
        return ans(N, arr, sum1, sum2);
    }
};
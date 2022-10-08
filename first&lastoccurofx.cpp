vector<int> find(int arr[], int n , int x )
{
    int first = -1;
    int last = -1;
    for (int i = 0; i < n; ++i)
    {
        if(first == -1 && arr[i] == x){
            first = i;
        }
        if (arr[i] == x)
        {
            last = i;
        }
    }
    std::vector<int> v;
    v.push_back(first);
    v.push_back(last);
    return v;
}
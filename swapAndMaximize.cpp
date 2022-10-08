long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    int pos = 0, neg = 0;
    for(int i=0;i<n/2;i++){
        neg += arr[i];
    }
    for(int i=n/2 + n%2;i<n;i++){
        pos += arr[i];
    }
    if(n / 2 == 0){
        return 2*pos - 2*neg;
    }
    else{
        return 2*pos - 2*neg;
    }
}
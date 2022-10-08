int calcx(int n){
    int x=0;
    while((1<<x) <= n){
        x++;
    }
    return x-1;
}
int countSetBits(int n)
{
    if(n==0) return 0;
    
    int x=calcx(n);
    // ans = (x.2^x)/2 + (n-2^x+1) + countSetBits(x & ~(1<<x))
    int ans = x*(1<<(x-1)) + (n-(1<<x)+1) + countSetBits(n & ~(1<<x));
    return ans;
}
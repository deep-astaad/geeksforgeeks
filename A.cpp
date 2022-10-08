#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp " "
#define nn '\n'


int main() {
    
    ll t;
    cin >> t;
    while (t--) {
		int n, k;
		cin>>n>>k;
		int arr[n];

		for(int i = 0; i < n; i++) {
			cin>>arr[i];
		}

		int cnt = 0;

		for(int i = 1; i < n; i++) {
			if(arr[i - 1] > arr[i]) {
				cnt++;
			}
		}

		if(cnt <= k) {
			cout<<"NO"<<endl;
		}
		else {
			cout<<"Yes"<<endl;
		}

    }
    return 0;
}
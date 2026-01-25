#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    int arr[n];
	    int brr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>brr[i];
	    }
	    for(int i=n-1;i>=0;i--){
	        if(i<n-1 && arr[i]<arr[i+1]) arr[i]=arr[i+1];
	        if(arr[i]<brr[i]) arr[i]=brr[i];
	    }
	    vector<long long> prefix(n + 1, 0);
        for(int i = 0; i < n; i++) {
            prefix[i+1] = prefix[i] + arr[i];
        }
	    while(q--){
    	    int l,r;
    	    cin>>l>>r;
    	    long ans = prefix[r]-prefix[l-1];
    	    cout<<ans<<" ";
	    }
	    cout<<endl;
	}
 
}
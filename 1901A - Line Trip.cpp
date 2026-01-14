
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
    	int n,k;
    	cin>>n>>k;
    	int arr[n];
    	for(int i=0;i<n;i++){
    	    cin>>arr[i];
    	}
    	int maxdis=arr[0];
    	for(int i=1;i<n;i++){
    	    maxdis=max(maxdis,arr[i]-arr[i-1]);
    	}
    	maxdis=max(maxdis,(k-arr[n-1])*2);
    	cout<<maxdis<<endl;
    }
}
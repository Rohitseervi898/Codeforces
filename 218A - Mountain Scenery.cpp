#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,k;
	cin>>n>>k;
	int t=2*n+1;
	int arr[t];
	for(int i=0;i<t;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<t;i++){
	    if(i>0 && i<t-1 && k>0 && arr[i-1]<(arr[i]-1) && arr[i+1]<(arr[i]-1)){
	        arr[i]-=1;
	        k--;
	    }
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
    return 0;
}
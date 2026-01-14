#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	int max;
	cin>>t>>max;
	int count=0;
	int limit=0;
	int arr[t];
	for(int i=0;i<t;i++){
	    int score;
	    cin>>arr[i];
	    if(i==max-1) limit=arr[i];
	}
	for(int i=0;i<t;i++){
	    if(arr[i]>=limit && arr[i]>0) count++;
	}
	cout<<count<<endl;
}

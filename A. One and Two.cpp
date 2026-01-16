#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int count=0;
	    int ans=-1;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==2) count++;
	    }
	    if(count==0) cout<<1<<endl;
	    else if(count%2==0){
	        int target=0;
	        for(int i=0;i<n;i++){
	            if(arr[i]==2){
	                target++;
	            }
	            if(target==count/2){
	                ans=i+1;
	                break;
	            }
	        }
	        cout<<ans<<endl;
	    }
	    else cout<<-1<<endl;
	}

}

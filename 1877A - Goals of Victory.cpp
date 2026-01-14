#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ans=0;
	    for(int i=0;i<n-1;i++){
	        int num;
	        cin>>num;
	        ans-=num;
	    }
	    cout<<ans<<endl;
	}
 
}
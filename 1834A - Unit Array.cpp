#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int pcount=0;
	    int ncount=0;
	    int ans=0;
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        if(num>0) pcount++;
	        else ncount++;
	    }
	    if(ncount%2!=0){
	        ans++;
	        ncount--;
	        pcount++;
	    }
	    if(ncount>pcount){
	        int change=(ncount - pcount +1)/2;
	        pcount+=change;
	        ncount-=change;
	        ans+=change;
	    }
	    if(ncount%2!=0){
	        ans++;
	        ncount--;
	        pcount++;
	    }
	    
	    cout<<ans<<endl;
	    
	}

}

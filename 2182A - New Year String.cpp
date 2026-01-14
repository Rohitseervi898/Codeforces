#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int len;
	    string s;
	    cin>>len>>s;
	    int c1=0;
	    int c2=0;
	    for(int i=0;i<len-3;i++){
	        string sub=s.substr(i,4);
	        if(sub=="2026") c1++;
	        if(sub=="2025") c2++;
	    }
	    if(c1) cout<<0<<endl;
	    else if(c2) cout<<1<<endl;
	    else cout<<0<<endl;
	}
}
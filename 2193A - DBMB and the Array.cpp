#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,s,x;
	    cin>>n>>s>>x;
	    int count=0;
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        count+=num;
	    }
	    if(count>s) cout<<"NO"<<endl;
	    else if(count<=s){
	        while(count<s){
	            count+=x;
	        }
	        if(count==s)cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	}
 
}
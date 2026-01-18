#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int maxi=0;
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        maxi=max(maxi,num);
	    }
	    cout<<maxi*n<<endl;
	}
 
}
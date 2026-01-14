#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	int mini=INT_MAX;
	for(int i=0;i<t;i++){
	    int num;
	    cin>>num;
	    num=abs(num);
	    mini=min(mini,num);
	}
	cout<<mini<<endl;
 
}

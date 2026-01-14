#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,k;
	cin>>n>>k;
	int count=0;
	while(n--){
	    int num;
	    cin>>num;
	    count+=(int)((k+num-1)/k);
	}
	cout<<count<<endl;
    return 0;
}
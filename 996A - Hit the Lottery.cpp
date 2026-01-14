#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int money;
	cin>>money;
	int count=0;
	while(money!=0){
	    if(money>=100) money-=100;
	    else if(money>=20) money-=20;
	    else if(money>=10) money-=10;
	    else if(money>=5) money-=5;
	    else money-=1;
	    count++;
	}
	cout<<count<<endl;
}

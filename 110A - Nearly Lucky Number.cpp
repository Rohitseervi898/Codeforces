#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='4' || str[i]=='7') count++;
    }
    if(count==7 || count == 4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
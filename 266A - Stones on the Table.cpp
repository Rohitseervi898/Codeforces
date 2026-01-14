#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    string str;
    cin>>t>>str;
    int count=0;
    for(int i=0;i<t-1;i++){
        if(str[i]==str[i+1])count++;
    }
    cout<<count<<endl;
}
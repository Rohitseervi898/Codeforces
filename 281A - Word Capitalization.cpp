#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    string str;
    cin>>str;
    if(str[0]-'a'>=0 && str[0]-'a'<26){
        int i=str[0]-'a';
        str[0]='A'+i;
    }
    cout<<str<<endl;
}
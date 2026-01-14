#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    string str;
    cin>>str;
    string ans="";
    for(char ch:str){
        if(ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'|| ch=='Y' ||ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'|| ch=='y' ) continue;
        if(ch-'A'>=0 && ch-'Z'<=0) ch=(ch-'A')+'a';
        ans+='.';
        ans+=ch;
    }
    cout<<ans<<endl;
}
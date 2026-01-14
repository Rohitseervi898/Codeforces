#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s1;
    string s2;
    cin>>s1>>s2;
    int c1=0;
    int c2=0;
    for(int i=0;i<s1.length();i++){
        if(s1.at(i)-'a'<26 && s1.at(i)-'a'>=0) c1+=(s1.at(i)-'a');
        else if(s1.at(i)-'A'<26 && s1.at(i)-'A'>=0) c1+=(s1.at(i)-'A');
        
        if(s2.at(i)-'a'<26 && s2.at(i)-'a'>=0) c2+=(s2.at(i)-'a');
        else if(s2.at(i)-'A'<26 && s2.at(i)-'A'>=0) c2+=(s2.at(i)-'A');
        
        if(c1<c2) {
            cout<<-1<<endl;
            return 0;
        }
        else if(c1>c2) {
            cout<<1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}

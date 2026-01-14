#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    string str;
    cin>>t>>str;
    int A=0;
    int D=0;
    
    for(int i=0;i<t;i++){
        if(str[i]=='A') A++;
        else D++;
    }
    if(A>D) cout<<"Anton"<<endl;
    else if(A<D) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}
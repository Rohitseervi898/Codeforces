#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
        if(b<=d){
            count+=d-b;
            a+=d-b;
            b=d;
        }
        else cout<<-1<<endl;
        if(c<=a){
            // a-=c-a;
            count+=a-c;
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    }
}

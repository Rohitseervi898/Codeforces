#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;
        int count=0;
        while(true){
            if(a.find(b) != string::npos){
                cout<<count<<endl;
                break;
            }
            a=a+a;
            count++;
            if(a.size()>=b.size()*2 && a.find(b) == string::npos){
                cout<<-1<<endl;
                break;
            }
        }
    }
}
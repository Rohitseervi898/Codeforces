#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        double n;
        int k;
        cin>>n>>k;
        if(n==k) {
            cout<<0<<endl;
            continue;
        }
        if(n<k){
            cout<<-1<<endl;
            continue;
        }
        int count=0;
        while(n>k){
            n=n/2;
            count++;
            if(k==floor(n) || k==ceil(n)) {
                cout<<count<<endl;
                break;
            }
            else if(k>n) cout<<-1<<endl;
        }
    }    
}
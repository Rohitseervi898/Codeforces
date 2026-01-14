#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num%2!=0) count++;
        }
        if(count%2!=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
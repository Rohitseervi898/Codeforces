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
        int prod=-1;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(prod==-1 || num%2!=prod%2){
                count++;
                prod=num%2;
            }
        }
        cout<<n-count<<endl;
 
        
    }
}
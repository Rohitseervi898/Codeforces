#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int brr[n+1];
        bool flag=true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(flag){
                brr[arr[i]]=1;
                flag=false;
            }
            else{
                brr[arr[i]]=0;
                flag=true;
            }
        }
        flag=true;
        for(int i=1;i<n;i++){
            if(brr[i]==brr[i+1]) flag=false;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
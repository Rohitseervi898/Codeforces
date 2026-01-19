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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=arr[0];
        for(int i=1;i<n;i++){
            ans^=arr[i];
        }
        if(n%2!=0) cout<<ans<<endl;
        else{
            if(ans==0) cout<<0<<endl;
            else cout<<-1<<endl;
        }
    }
}
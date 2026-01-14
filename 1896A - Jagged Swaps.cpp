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
        int minele=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            minele=min(minele,arr[i]);
        }
        if(arr[0]==minele) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
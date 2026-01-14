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
        int mini=INT_MAX;
        bool sorted=true;
        for(int i=1;i<n;i++){
            if(arr[i-1]<=arr[i]) mini=min(mini,arr[i]-arr[i-1]);
            else sorted=false;
        }
        if(sorted){
            cout<<(mini/2)+1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}
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
        int maxi=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==maxi) count++;
        }
        
        if(count==n) cout<<"-1"<<endl;
        else{
            int b[n-count];
            int c[count];
            int j=0;
            int k=0;
            for(int i=0;i<n;i++){
                if(arr[i]==maxi) c[j++]=arr[i];
                else b[k++]=arr[i];
            }
            cout<<n-count<<" "<<count<<endl;
            for(int i=0;i<n-count;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<count;i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
}
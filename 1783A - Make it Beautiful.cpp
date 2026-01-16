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
        int count=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]) count++;
        }
        if(count==n) {
            cout<<"No"<<endl;
            continue;
        }
        
        sort(arr, arr + n, greater<>());
        
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                int temp=arr[i];
                arr[i]=arr[n-1];
                arr[n-1]=temp;
            }
        }
        cout<<"Yes"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
}
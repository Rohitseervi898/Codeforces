
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]>m){
                high=mid-1;
            }
            else low=mid+1;
        }
        cout<<low<<endl;
    }
}

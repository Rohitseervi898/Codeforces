#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=-1,r=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=n-i){
            l=i;
            int target = n-i;
            for(int j=i+1;j<n;j++){
                if(arr[j]==target){
                    r=j;
                    break;
                }
            }
            break;
        }
    }
    if(l!=-1) reverse(arr.begin()+l,arr.begin()+r+1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 
}
 
int main() {
 
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
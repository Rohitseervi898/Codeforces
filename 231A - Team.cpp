#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    int ans=0;
    while(t--){
        int count=0;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            if(x==1) count++;
        }
        if(count>1) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
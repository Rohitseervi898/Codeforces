#include <bits/stdc++.h>
using namespace std;
 
int countLayer(int a,int b){
    int size=1;
    bool flag=false;
    int count=0;
    while(a-size>=0 || b-size>=0){
        if(flag){
            if(a-size<0) break;
            a-=size;
            flag=false;
        }
        else {
            if(b-size<0 ) break;
            b-=size;
            flag=true;
        }
        count++;
        size*=2;
    }
    return count;
}
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans=0;
        ans=max(ans,countLayer(a,b));
        ans=max(ans,countLayer(b,a));
        cout<<ans<<endl;
    }
    
}
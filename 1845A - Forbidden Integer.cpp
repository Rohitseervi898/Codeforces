#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,k,n;
        cin>>x>>k>>n;
        bool possible=true;
        if((n==1 && k<3 && x%2!=0) || (k==1 && n==1)) possible=false;
        if(possible){
            cout<<"YES"<<endl;
            if(n!=1){
                cout<<x<<endl;
                for(int i=0;i<x;i++){
                    cout<<1<<" ";
                }
            }
            else{
                int sum=0;
                cout<<(x/2)<<endl;
                
                while(sum<x){
                    if(x-sum==3) {
                        sum+=3;
                        cout<<3<<" ";
                    }
                    else{
                        sum+=2;
                        cout<<2<<" ";
                    }
                }
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
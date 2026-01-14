
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<bool> present(n+1,false);
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num<n+1) present[num]=true;
        }
        
        int mex=0;
        while(present[mex]){
            mex++;
        }
        
        cout<<min(mex,k-1)<<endl;
    }
}
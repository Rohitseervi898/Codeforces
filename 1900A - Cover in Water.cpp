#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        int dots=0;
        int dmax=0;
        for(int i=0;i<n;i++){
            if (arr[i]=='.') {
                count++;
                dots++;
            }
            else count=0;
 
            dmax=max(count,dmax);
        }
        if(dmax>2)cout<<"2"<<endl;
        else cout<<dots<<endl;
    }
}
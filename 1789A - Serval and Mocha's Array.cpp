#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    int c;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    while(a!=0){
        c=b%a;
        b=a;
        a=c;
    }
    return b;
}

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
	    
	    int mingcd=INT_MAX;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            mingcd=min(mingcd,gcd(arr[i],arr[j]));
	        }
	    }
	    if(mingcd>2) cout<<"No"<<endl;
	    else cout<<"Yes"<<endl;
	}

}

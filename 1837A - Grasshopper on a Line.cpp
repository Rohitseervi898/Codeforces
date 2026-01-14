#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> arr;
	    int i=n;
	    while(n!=0){
	        if(i%k!=0 && n-i>=0){
	            arr.push_back(i);
	            n-=i;
	        }else{
	            i--;
	        }
	    }
	    cout<<arr.size()<<endl;
	    for(int num:arr){
	        cout<<num<<" ";
	    }
	    cout<<endl;
	}
 
}
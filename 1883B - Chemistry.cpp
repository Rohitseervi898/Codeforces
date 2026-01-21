#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    string str;
	    cin>>n>>k>>str;
	    vector<int> arr(26,0);
	    for(char ch:str){
	        arr[ch-'a']++;
	    }
	    
	    int count=0;
	    for(int i=0;i<26;i++){
	        if(arr[i]%2!=0) count++;
	    }
	    
	    if(count-k<=1) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}
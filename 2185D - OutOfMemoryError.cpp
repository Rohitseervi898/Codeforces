#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,h;
	    cin>>n>>m>>h;
	    int arr[n];
	    int temp[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        temp[i]=arr[i];
	    }
	    
	    vector<int> history;
	    while(m--){
	        int b,c;
	        cin>>b>>c;
	        b--;
	        temp[b]+=c;
	        history.push_back(b);
	        if(temp[b]>h){
	            for(int i:history){
	                temp[i]=arr[i];
	            }
	            history.clear();
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        cout<<temp[i]<<" ";
	    }
	    cout<<endl;
	    
	}
 
}

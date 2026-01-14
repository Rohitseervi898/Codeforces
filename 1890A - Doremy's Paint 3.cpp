
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int minele=INT_MAX;
        unordered_map<int, int> freq;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        if(freq.size()==1) cout<<"YES"<<endl;
        else if(freq.size()==2){
            int firstele=0;
            int secondele=0;
            for(auto i:freq){
                secondele=firstele;
                firstele=i.second;
            }
            if(firstele==secondele-1 || firstele==secondele+1 || firstele==secondele) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}

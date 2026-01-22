#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,k;
        cin>>s>>k;
        vector<int> arr(26,0);
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
            arr[k[i]-'a']--;
        }
        bool flag=true;
        for(int i=0;i<26;i++){
            if(arr[i]!=0) flag=false;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
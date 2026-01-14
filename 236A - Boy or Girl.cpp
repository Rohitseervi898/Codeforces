#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string str;
    cin>>str;
    int arr[26]={};
    int count=0;
    for(int i=0;i<str.size();i++){
        if(arr[str[i]-'a']==0) count++;
        arr[str[i]-'a']++;
    }
    
    if(count%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}

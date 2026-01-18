#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        while(n>10){
            n/=10;
            count++;
        }
        cout<<(count*9)+n<<endl;
        
    }
}
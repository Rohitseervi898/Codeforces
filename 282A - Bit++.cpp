#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    int x=0;
    while(t--){
        string c;
        cin>>c;
        if(c=="X++" || c=="++X") x++;
        else if(c=="X--" || c=="--X") x--;
    }
    cout<<x;
    return 0;
}

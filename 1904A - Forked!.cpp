#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,kx,ky,qx,qy;
        cin>>x>>y>>kx>>ky>>qx>>qy;
        int king[8][2];
        int queen[8][2];
        
        int ways[]={x,y,-x,-y};
        int j=0;
        for(int i=0;i<4;i++){
            king[i][0]=kx+ways[j];
            king[i][1]=ky+ways[(j+1)%4];
            king[7-i][0]=kx+ways[(j+1)%4];
            king[7-i][1]=ky+ways[j];
            queen[i][0]=qx+ways[j];
            queen[i][1]=qy+ways[(j+1)%4];
            queen[7-i][0]=qx+ways[(j+1)%4];
            queen[7-i][1]=qy+ways[j];
            j++;
        }
 
        int count=0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(king[i][0]==queen[j][0] && king[i][1]==queen[j][1]) count++;
            }
        }
        if(x==y) count/=4;
        cout<<count<<endl;
    }
}
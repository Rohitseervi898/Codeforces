#include <bits/stdc++.h>
using namespace std;
 
bool isUnique(string year){
    sort(year.begin(),year.end());
    if(year[0]!=year[1] && year[1]!=year[2] && year[2]!=year[3]) return true;
    return false;
}
 
int main() {
	int year;
	cin>>year;
	for(int i=year+1;i<10000;i++){
	    if(isUnique(to_string(i))){
	        cout<<i<<endl;
	        break;
	    }
	}
}
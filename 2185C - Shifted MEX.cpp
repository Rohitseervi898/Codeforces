#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    a.erase(unique(a.begin(), a.end()), a.end());
 
    int max_len = 0;
    int current_len = 0;
 
    for(int i = 0; i < a.size(); i++) {
        if (i > 0 && a[i] == a[i-1] + 1) {
            current_len++;
        } else {
            current_len = 1;
        }
        max_len = max(max_len, current_len);
    }
 
    cout << max_len << "\n";
}
 
int main() {
 
    int t;
    if (cin >> t) {
        while(t--) {
            solve();
        }
    }
    return 0;
}

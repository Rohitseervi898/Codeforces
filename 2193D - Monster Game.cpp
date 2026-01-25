#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];
 
    sort(a.rbegin(), a.rend());
 
    long long max_score = 0;
    long long needed_swords = 0;
 
    for(int k = 1; k <= n; k++) {
        needed_swords += b[k-1];
 
        if(needed_swords > n) break;
 
        long long current_x = a[needed_swords - 1];
 
        long long current_score = (long long)k * current_x;
        max_score = max(max_score, current_score);
    }
 
    cout << max_score << "\n";
}
 
int main() {
 
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
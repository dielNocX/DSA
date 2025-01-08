#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define se second
#define fi first
typedef long long ll;

void solve() {
    ll n, q;
    cin >> n >> q;
    
    pair<ll, ll> ma = {0, 0}, mi = {LLONG_MAX, 0}; // Corrected the pair initialization
    
    ll inp, i;
    for (i = 1; i <= n; i++) {
        cin >> inp;
        
        // Checking for max (inp - i)
        if (inp - i > ma.fi - ma.se) {
            ma.fi = inp;
            ma.se = i;
        }
        
        // Checking for min (inp - i)
        if (inp - i < mi.fi - mi.se) {
            mi.fi = inp;
            mi.se = i;
        }
    }
    
    // Print the difference
    cout << (ma.fi - ma.se) - (mi.fi - mi.se) << endl;

    // Process each query
    while (q--) {
        cin >> inp >> i;
        
        // Update max and min values based on the query
        if (inp - i > ma.fi - ma.se) {
            ma.fi = inp;
            ma.se = i;
        }
        if (inp - i < mi.fi - mi.se) {
            mi.fi = inp;
            mi.se = i;
        }

        // Print the difference
        cout << (ma.fi - ma.se) - (mi.fi - mi.se) << endl;
    }
}

int main() {
    ll t;
    cin >> t;
    
    // Solve each test case
    while (t--) {
        solve();
    }

    return 0;
}

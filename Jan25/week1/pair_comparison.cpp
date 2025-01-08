#include <iostream>
#include <cmath>  // For pow, floor, ceil
#include <algorithm> // For min, max

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {
    ll n;
    ld k, l1, r1, l2, r2;
    ll res = 0, temp = 0;

    cin >> k >> l1 >> r1 >> l2 >> r2;

    for (ll i = 0; i < 31; i++) {
        // Calculate the valid range for the current value of 'k^i'
        //ll left = max(static_cast<ll>(l1), static_cast<ll>(ceil(l2 / pow(k, i))));
       // ll right = min(static_cast<ll>(r1), static_cast<ll>(floor(r2 / pow(k, i))));

        // Count valid values in the range

        temp = min(static_cast<ll>(r1),static_cast<ll>(floor(r2/pow(k,i))))-max(static_cast<ll>(l1),static_cast<ll>(ceil(l2/pow(k,i))))+1;



        //temp = right - left + 1;
        temp = max(0LL, temp);  // Ensure that temp is non-negative

        // Add the valid count to the result
        res += temp;
    }

    cout << res << '\n';
    return 0;
}

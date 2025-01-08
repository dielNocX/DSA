#include <iostream>
#include <unordered_map>
#include <cmath>

typedef long long ll;
using namespace std;

int main() {
    ll n, x, count = 0;
    unordered_map<ll, ll> freq;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        cin >> x;

        for (ll i = 1; i <= sqrt(x); i++) {
            if (x % i == 0) {

                    if (i == x / i) {
                        if (freq.count(i) > 0) count += freq[i];
                    } else {
                        if (freq.count(i) > 0) count += freq[i] + freq[x / i];
                    }

            }
        }

        freq[x]++;
    }

    cout << count;

    return 0;
}

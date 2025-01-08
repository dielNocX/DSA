#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

ll binarySum(ll n, ll k, ll i) {
    ll totalSum =
    (2*k+n-1)*n/2;
    ll leftSum =
    (2*k+i-1)*i/2;
    ll rightSum = totalSum - leftSum;
    return abs(leftSum - rightSum);
}

int main() {
    ll N;
    ll low, high, mid, A,B;

    vector<ll> v;
    cin >> N;
    while (N--) {
        ll n, k;
        cin >> n >> k;

        low = 1, high = n;
        while (low < high) {
            mid = (low + high) / 2;
            A = binarySum(n, k, mid);
            B = binarySum(n, k, mid + 1);

            if (A < B) high = mid;
            else low = mid + 1;

        }

        v.push_back(binarySum(n, k, low));
    }

    for (auto hasil :v) cout << hasil<<'\n';

    return 0;
}

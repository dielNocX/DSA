#include <iostream>
#include <unordered_map>
#include <vector>

typedef long long ll;
using namespace std;

int main() {
    ll n, test, MAX =2e5 +5;
    vector<ll> results;
    unordered_map<ll,ll> dp, cumulativeSum;

               cumulativeSum[0] = 0; dp[0] = 0;
        for (ll i = 1; i <= MAX; i++) {
            if (!dp.count(i)) dp[i] = i % 10 + dp[i / 10]; // Sum of digits for i
            cumulativeSum[i] = cumulativeSum[i-1] + dp[i];
        }

        // Use a cumulative sum array to store the total sum of all dp values up to each i

        //for (ll i = 1; i <= MAX; i++) {
          //  if (!cumulativeSum.count(i)) cumulativeSum[i] = cumulativeSum[i - 1] + dp[i];
        //}


    cin >> test;

    // Process each test case
    while (test--) {
        cin >> n;

        results.push_back(cumulativeSum[n]);
    }

    // Output results for all test cases
    for (auto result : results) {
        cout << result << '\n';
    }

    return 0;
}

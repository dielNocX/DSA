#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<long long>> dp(K + 1, vector<long long>(N + 1, 0));

    dp[0][0] = 1;

    for (int jump = 1; jump <= K; ++jump) {
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= M; ++j) {
                if (i - j >= 0) {
                    dp[jump][i] = (dp[jump][i] + dp[jump - 1][i - j]) % MOD;
                } else {
                    // If we jump past stone N, we bounce back
                    int bounce_back = (i - j) + j;
                    if (bounce_back <= N) {
                        dp[jump][i] = (dp[jump][i] + dp[jump - 1][bounce_back]) % MOD;
                    }
                }
            }
        }
    }

    // Calculate the total number of ways to reach stone N with at most K jumps
    long long result = 0;
    for (int jump = 1; jump <= K; ++jump) {
        result = (result + dp[jump][N]) % MOD;
    }

    cout << result << endl;

    return 0;
}

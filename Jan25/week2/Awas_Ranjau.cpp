#include <bits/stdc++.h>
#include <iostream>

typedef long long ll;

using namespace std;

struct pas {
    ll b, k;  // Two fields: b and k
};

int main() {
    ll N, M, a, b;
    cin >> N >> M >> a >> b;

    char c;
    ll cb = 0;  // Counter for the 'x' in a row
    ll ck[M + 1] = {0};  // Array to count 'x' in columns, initialize to 0
    pas A[N + 1][M + 1];  // 2D array of pas structure

    // Initialize the boundaries of the grid
    for (ll i = 0; i <= N; i++)
        A[i][0] = {0, 0};  // Initialize the first column
    for (ll j = 0; j <= M; j++)
        A[0][j] = {0, 0};  // Initialize the first row

    // Fill the grid with values based on input
    for (ll i = 1; i <= N; i++) {
        cb = 0;  // Reset the row 'x' count for each row
        for (ll j = 1; j <= M; j++) {
            cin >> c;  // Read the character 'x' or other

            if (c == 'x') {
                cb++;  // Increment the row 'x' count
                ck[j]++;  // Increment the column 'x' count
            }

            // Store the results in the 2D array A[i][j]
            A[i][j] = {cb, ck[j]};
        }
    }

    // Output the 2D array with the required format
    for (ll i = 0; i <= N; i++) {
        for (ll j = 0; j <= M; j++) {
            // Output the values of b and k in each cell of A
            cout << "(" << A[i][j].b << "," << A[i][j].k << ") ";
        }
        cout << '\n';  // Newline after each row
    }

    return 0;
}

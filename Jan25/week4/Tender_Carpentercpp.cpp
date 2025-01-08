#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

typedef long long ll;   
typedef long double ld;
using namespace std;

//https://codeforces.com/contest/2053

int main() {

ld n, x;ll inp;
string res; vector<ld> v;
    cin >>inp;
    while (inp--){
    cin >> n; 

    v.clear();
    res = "NO";
    for (ll i=0; i<n;i++){
        cin >> x;
        v.push_back(x);
    }



    for (ll i=1; i<n;i++){
        if (max(v[i],v[i-1])/min(v[i],v[i-1]) < 2){
            res = "YES";
        }

    }

    cout << res;
    cout << "\n";
    }

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

typedef long long ll;   
typedef long double ld;
using namespace std;

int main() {

    freopen("inputf.in","r",stdin);
    freopen("outputf.out","w",stdout);
    ld n, x;


    multiset<ld> m;
    vector<ld> v;
    cin >> n;

    for (ll i=0; i<n;i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());


    for (ll i=1; i<n;i++){
        if (v[i]/v[i-1] < 2){
            cout << "YES";
            return 0;
        }

    }

    cout << "NO";
}

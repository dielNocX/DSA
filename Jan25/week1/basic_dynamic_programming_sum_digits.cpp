#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double Ald;
using namespace std;
//https://codeforces.com/contest/1926/problem/C

int main() {
    ll n,test,sum=0;
    unordered_map<ll,ll> dp((2e5)+5);
    vector<ll> v;
    cin >> test;
    test++;
    while (--test){
      sum=0;
      cin >>n;


      dp[0] =0;

      for (ll i=1;i<=n;i++){
        dp[i] = i%10 + dp[i/10];
        sum += dp[i];
      }

    v.push_back(sum);
    }

    for (auto result : v) cout << result<<'\n';
    return 0;
}

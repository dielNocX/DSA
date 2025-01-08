#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {
  ll n;
  ll MOD = 1000000007;
  unordered_map<ll,ll> res;
  cin >> n;


  res[0] = 1;
  res[1] = 1;
  res[2] = 1;

  for (ll i =3;i<=n;i++){
    res[i] = (res[i-3]+ res[i-1]) %MOD;
  }

  cout << ((((res[n] % MOD) *(res[n] % MOD)) % MOD) *(res[n] % MOD)) % MOD;

  return 0;
}

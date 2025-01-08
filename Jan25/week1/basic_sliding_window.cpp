#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {

  ll N, n,k, min=LLONG_MAX;
  vector<ll> v;

  cin>>N;
  while(N--){
    cin >> n >>k;
    ll sum = 0;
    //idx = n-1;

     sum = static_cast<ll>(static_cast<ld>(k+k+n-1)*static_cast<ld>(n)/2)
    min =sum;

    for (ll i =k+n-1; i>=k;i--){
      sum -=2*i;
      if (abs(sum) <min) min =abs(sum);
    }

    v.push_back(min);
  }

  for ( auto hasil : v){
    cout<<hasil<<'\n';
  }
return 0;
}

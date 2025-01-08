#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double Ald;
using namespace std;

int main() {

  ll N,x,y,k;

  cin >>N;
  vector<ll> v;
  for (int i = 0; i<N;++i){
    cin>>x>>y>>k;
    if (y%k!=0) y = (y/k) + 1;
    else y/=k;

    if (x%k!=0) x = (x/k) + 1;
    else x/=k;

    if (x>y) v.push_back((2*x)-1);
    else v.push_back((2*y));
  }
for (auto hasil:v){
    cout << hasil<<'\n';
}

  return 0;

}

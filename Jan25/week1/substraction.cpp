#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {

  ll N,a,b;
  vector<ll> v;
  cin >>N;
  while (N--){
    cin>>a>>b;
    v.push_back(b-a);
  }

  for (auto hasil: v){
    cout<< hasil<<"\n";
  }


  return 0;

}

#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

//https://codeforces.com/contest/1915

int main() {

  ll N,x,inp,a,b;
  string s;

  vector<ll> v, res;

  //cin>>N;

 // while (N--){
    cin >>x;
    a=0;b=0;
    s = "NO"
    for (ll i =0; i<x;i++){
      cin >> inp;
      v.push_back(inp);
      (i%2 == 0) ? a+=inp: b+=inp;
      if (a == b) {
        s = "YES";
      }
    }

    for (ll i = 0; i < x;i++){
      (i%2 == 0) ? a-=inp: b-=inp;
    }
  //for (auto x :v) cout << x <<'\n';

  //cout << 'A'+'B'+'C';

return 0;
}

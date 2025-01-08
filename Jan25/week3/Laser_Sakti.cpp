#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

int main(){


  ld n , x,y;
  ld a,b;
  cin >>n>>x>>y;
  set<ld> s;
  bool cek= false;

  for (ll i = 0; i<n; i++){
    cin >> a >> b;
    if (b != y) s.insert((a-x)/(b-y));
    else cek = true;
  }

  ll size = s.size();
  if (cek) size++;
  cout <<size;


 return 0;
}

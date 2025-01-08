#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
  ll n,k,x;
  //deque<ll> d;
  ll front, back;
  cin >>x;
  while (x--){
     cin >>n>>k;
     front = 1, back = n;
  //  for (ll i = 1; i<=n;i++) d.push_back(i);

    for (ll i=1; i<=n;i++){
      if (i % k == 0) {
        cout << front<<" ";
        front++;
      } else {
        cout << back<<" ";
        back--;
      }

    }
    cout << "\n";
  }
  return 0;
}

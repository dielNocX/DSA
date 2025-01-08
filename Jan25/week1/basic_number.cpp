#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {

  ll N, a,b,c;
  vector<ll> v;
  cin>>N;
  while (N--){
    cin >> a >>b>>c;
    v.push_back(a^b^c);

}
  for (auto x :v) cout << x <<'\n';

return 0;
}

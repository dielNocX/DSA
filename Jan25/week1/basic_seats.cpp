#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {
  ll n,s,a,b,c;
  cin >> n;
  while (n--){
    cin >> s>>a>>b>>c;
    a = min(s,a);
    b = min(s,b);
    c = min((2*s)-a-b,c);
    cout<< a+b+c<<'\n';
  }

return 0;
}

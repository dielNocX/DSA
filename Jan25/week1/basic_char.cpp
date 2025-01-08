#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

//

int main() {

  ll N,a,b;
  char c;

  vector<char> v;

  cin>>N;

  while (N--){
    a=3;
    while (a--){
      int sum = 0;
      b=3;
      while (b--){
        cin >> c;
        sum += c;

      }
      if (sum != 198) v.push_back(char(198 - (sum - 63)));
    }
  }

  for (auto x :v) cout << x <<'\n';

  //cout << 'A'+'B'+'C';

return 0;
}

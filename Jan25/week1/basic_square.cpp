#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

//https://codeforces.com/contest/1915

int main() {

  ll N,a, b;
  char c;

  vector<string> v;

  cin>>N;

  while (N--){
    cin >>a;
    ld sum = 0;
    while (a--){
      cin >>b;
      sum += static_cast<ld>(b);

      }
      (sqrt(sum) == floor(sqrt(sum)) )?  v.push_back("YES"): v.push_back("NO");
    }


  for (auto x :v) cout << x <<'\n';

  //cout << 'A'+'B'+'C';

return 0;
}

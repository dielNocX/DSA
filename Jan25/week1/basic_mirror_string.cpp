#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {
  ll n;
  string s, res;
  cin >> n;
  while (n--){
    res = "";
    cin >> s;
    while(!s.empty()){
      if (s.back() == 'q'){
        res += "p";
      } else if (s.back() == 'p'){
        res += "q";
      } else {
        res += "w";
      }
      s.pop_back();
    }

    cout << res<<'\n';
  }



  //}

return 0;
}

#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

//https://codeforces.com/contest/1915

int main() {

  ll N,a, count = 0;
  string s, res;

  vector<string> v;


  cin >>N;
  while (N--){
      cin >>a>>s;
      res ="";

      while (s.length() != 0){

        (s[s.length()-1] == 'a' || s[s.length()-1] == 'e') ? count = 2: count = 3;

        while(count--){
              res += s[s.length()-1];
              s.pop_back();
            }
        res.push_back('.');
      }

      res.pop_back();
      reverse(res.begin(), res.end());

      v.push_back(res);
  }

  for (auto result:v) cout << result<<'\n';
return 0;
}


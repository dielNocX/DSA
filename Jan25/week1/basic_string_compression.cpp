#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){

  ll n;

  cin >> n;
  vector<string> str;
  string s;

  for (ll i =0;i<n;i++){
    cin >>s;
    if (s.length() > 10) s = s[0] + to_string(s.length()-2) +s[s.length()-1];
    str.push_back(s);
  }

  for (auto x :str){
    cout << x<<endl;
  }

  return 0;
}

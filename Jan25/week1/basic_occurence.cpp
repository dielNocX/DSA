#include <iostream>
#include <bits/stdc++.h>

//https://codeforces.com/contest/1926/problem/A

typedef long long ll;
typedef long double Ald;
using namespace std;

int main() {

  ll N;
  char x;

  cin >>N;
  vector<char> v;
  unordered_map<char,ll> freq;

  for (ll i = 0; i<N;++i){
    freq.clear();
    for (ll j = 0; j<5;++j){
      cin>>x;
      freq[x]++;
    }

    (freq['A'] > freq['B']) ? v.push_back('A') : v.push_back('B');

  }

for (auto hasil:v){
    cout << hasil<<'\n';
}

  return 0;

}

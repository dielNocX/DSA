#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {
  ll n , q;
  string s;
  unordered_map<string,ll> freq;
  vector<string> ang;
  cin >> n >>q;
  for (ll i = 0;i<n;i++){
    cin >> s;
    freq[s] = 0;
    ang.push_back(s);
  }

  for (ll i = 0;i<q;i++){
    cin >> s;
    freq[s]++;
  }

  sort(ang.begin(),ang.end());


  for (string res : ang){
    cout << res << " "<< freq[res]<<'\n';
  }


  return 0;
}

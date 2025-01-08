#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {
  string s;
  ll n = 0;

  char temp;
  unordered_map<char,ll> freq;
  vector<char> res;

  cin >> s;
  for (ll i=0;i<s.length();i++){
    freq[s[i]- 'a']++;
  }

  for (ll i=0;i<26;i++){
    n = freq[i];
    if (n/2 > 0){
      for (ll j =0; j<n/2;j++){
        res.push_back(char(i+'a'));
      }

    }

    if (n%2==1) temp = char(i+'a');
  }

  for (auto x : res){
      cout << x;
  }

  reverse(res.begin(), res.end());

  if (s.length()>res.size()*2) cout<<temp;
//<<" "<<(s.length()>res.size()*2)<<endl;

  for (auto x : res){
      cout << x;
  }

  //for (ll i = 0;i<26;i++){
  //  cout << char(i + 'a') <<" " <<freq[i]<<endl;
  //}
}

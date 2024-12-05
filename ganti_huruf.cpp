

#include <iostream>

#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;


int main(){

unordered_map<char, char> m;
char c;
ll n; bool ada=false,beda=true;
cin >>n;
vector<char> belum(n),sudah(n), hasil(n);


for (ll i=0;i<n;i++){
  cin >> belum[i];
}


for (ll i=0;i<n;i++){
  cin >> sudah[i];
}

for (ll i=0;i<26;i++){
  m[i+'A'] = '?';
}

for (ll i=0;i<n;i++){
  if (m[sudah[i]] != '?') beda= false;
  m[sudah[i]] = belum[i];
}

for (ll i=0;i<n;i++){
  cin >> c;
  if (m[c] != '?') ada = true;
  hasil[i] = m[c];
}

if (ada && !beda){

for (ll i=0;i<n;i++){
cout<<  hasil[i] ;
}

} else cout<<  "Pak Dengklek bingung" ;
return 0;
}

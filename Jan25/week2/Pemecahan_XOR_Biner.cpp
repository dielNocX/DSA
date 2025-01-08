#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {
  ll n,k, count=0;
  cin >> n >>k;
  char c;

  for (ll i=0 ;i<n;i++){
    cin >> c;
    if (c == '1') count++;
  }

  //cout <<"count: " <<count;
  if (count >= k && count %2==1 && k%2==1) cout <<"Ya";
  else if (count%2==0 && count >= k*2) cout <<"Ya";
  else if (count%2==0 && n-k+1>=count) cout <<"Ya";
  else cout<<"Tidak";
}

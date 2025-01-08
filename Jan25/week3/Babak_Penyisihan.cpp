#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long long ld;

using namespace std;

int main(){

  ld s,p, count = 0,inp;
  cin>>s>>p;
  //LL res = LLONG_MAX;
  bool cek = false;

  for (ll i = 0; i<s;i++){
    count =0;
    for (ll j=0;j<p;j++){
      cin >>inp;
      if (inp == 1) count++;

    }
    if (count <= s/2) cek = true;
  }


  (cek) ? cout << "YA" :cout << "TIDAK";
  return 0;
}

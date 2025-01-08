#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {
  ll len, count =1;
  string s = "";

  cin >>len >>s;
  for (ll i = 1; i<len;i++){
    if  (s[i]==s[i-1]){
      count++;
    } else {
      cout << s[i-1]<<count;
      count = 1;
    }

  }

  cout << s.back() << count;

}

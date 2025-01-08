#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

typedef long long ll;

using namespace std;


int main(){


  /*unordered_map<ll,ll> m;
  ll base = 1, count =1;
  while (base < 1000000000000000000){
     m[base] = count;
     count++;
     base *= 4;
  }*/

  ll n,x;
  cin>>n;

  ll count;

  while (n--){

  cin >>x;

  count =0;
  while (x>0){
     //m[base] = count;
     count++;
     x /= 4;
  }
  cout <<static_cast<ll>(pow(2,count-1))<<'\n';
  }
  return 0;
}

#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
  ll n , p ,x, sum;
  cin >> n>>x>>p;
  unordered_map<ll,ll> stop;
  bool cek =false;

  sum =0;

  for (ll i =1; i<=p; i++){
    sum += i;
    sum %=n;

        if ((x+sum)%n == 0) {
      cek =true;
        break;
      }
    if (stop.count(sum) > 0) break;
    stop[sum]++;

  }


  if (cek) cout<<"Ya";
  else cout <<"Tidak";


return 0;

}

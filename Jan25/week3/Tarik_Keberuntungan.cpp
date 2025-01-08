#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
  ll n , p ,x;
  cin >> n>>x>>p;
  x++;
  for (ll i =1; i<=p; i++){
    if ((x+((i*(i+1))/2))%n == 1) {
      cout << "Ya";
      return 0;
      }
  }

  cout <<"Tidak";




}

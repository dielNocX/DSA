#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{

  ll x, sum ,count=0;
  cin>>x;

  sum = 0;
  for (ll i=1; i<=x; i++){
    sum +=i;
    if (sum >= x){
      count = i;
      break;
    }
  }

  if (sum > x) count--;
  cout << count;


}

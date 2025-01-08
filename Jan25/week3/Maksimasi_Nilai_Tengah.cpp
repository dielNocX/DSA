#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
  ll N,S,M;
  cin >> N >>S;

  M = (N+1)/2;
  M--;
  if (N%2)
  cout << (S-M)/(N-M);


 return 0;
}

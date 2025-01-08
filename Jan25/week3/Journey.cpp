#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

int main(){


  ll n, x, a,b,c,res=0;

  cin >>x;

  while (x--){
  res = 0;
  cin >>n
  while (n--){
  cin >>a>>b>>c;
  res = 3 *(n / (a+b+c));

  n = n % (a+b+c);

  if (n != 0) res++;
  if (n >a) res++;
  if (n >a+b) res++;



  }
  cout <<res<<endl;
  }
  return 0;
}

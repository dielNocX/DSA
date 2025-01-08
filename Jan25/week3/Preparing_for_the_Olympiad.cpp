#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

int main(){


  ll n, x, inp, temp=0,res=0;
  ll A[105];

  cin >>x;

  while (x--){
  res = 0;
  cin >>n;
  for (ll i =0; i<n;i++){
  cin >>A[i];
  }
  for (ll i =0; i<n;i++){
  cin >>inp;
  if (i>0) res+= max(A[i-1]-inp,0LL);
  }
cout <<res+A[n-1]<<endl;
  }


  return 0;
}

#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){

  ll N,X, inp,count=0;
  cin >>N>>X;
  vector<ll> V;
  for (ll i = 0;i<N;i++){
    cin >>inp;
    if (X%inp==0) V.push_back(inp);
  }

  for (ll i=0; i<V.size(); i++){
    while (X%V[i]==0){
      X /= V[i];
      //cout <<X<< "\n";
      count++;
    }

  }

  if (X >1) cout <<"Mustahil! o_o";
  else {
    cout<<count;
  }


  return 0;
}

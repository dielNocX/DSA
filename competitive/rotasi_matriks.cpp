

#include <iostream>

#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int main(){


ll b,k;
cin>>b>>k;

vector<vector<ll>> v(b,vector<ll>(k));

for (ll i =0;i<b;i++){
  for (ll j =0;j<k;j++)
    cin >> v[i][j];
}


for (ll i =0;i<k;i++){
  for (ll j=b-1;j>=0;j--){

    cout<< v[j][i];
    if (j!=0) cout <<" ";
  }
  if (i!=k-1) cout <<"\n";
}



return 0;
}

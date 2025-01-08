#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {

  ll N;
  vector<ll> n;
  char a;

//  vector<ll> v;
  vector<vector<ll>> v;

  cin >>N;
  v.resize(N);
  n.resize(N);
  for (int i = 0; i<N;++i){

    cin >>n[i];
    v[i].resize(n[i]);

    for (int k=0;k<n[i];k++){
      for (int j=0;j<4;j++){
        cin>>a;
        if (a=='#') v[i][n[i]-k-1]=j;
      }
    }
  }
for (int i=0; i<N;i++){
  for (int j=0; j<n[i];j++){
    cout<< v[i][j]+1<<" ";
  }
  cout<< "\n";
}

  return 0;

}

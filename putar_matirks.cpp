

#include <iostream>

#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

int main(){


ll b,k,n,temp,x;
string inp;
cin>>b>>k>>x;
n= max(b,k);
vector<vector<ll>> v(n,vector<ll>(n)), vtemp(n,vector<ll>(n));

for (ll i =0;i<b;i++){
  for (ll j =0;j<k;j++)
    cin >> v[i][j];
}


for (ll i =0;i<x;i++){
  cin>>inp;


if (inp=="90"){

for (ll i =0;i<k;i++){
  for (ll j=b-1;j>=0;j--){

    vtemp[i][(b-1)-j]= v[j][i];
  }

}

  temp = b;
  b=k;
  k=temp;

  v = vtemp;

} else if (inp=="270"){

for (ll i =0;i<k;i++){
  for (ll j=0;j<b;j++){

    vtemp[(k-1)-i][j]= v[j][i];
  }

}

  temp = b;
  b=k;
  k=temp;

  v = vtemp;
} else if (inp=="180"){

for (ll i =0;i<k;i++){
  for (ll j=0;j<b;j++){

    vtemp[(b-1)-j][(k-1)-i]= v[j][i];
  }

}
  v = vtemp;
} else if (inp=="_"){

for (ll i =0;i<b;i++){
  for (ll j=0;j<k;j++){

    vtemp[(b-1)-i][j]= v[i][j];
  }

}
  v = vtemp;

}else if (inp=="|"){

for (ll i =0;i<b;i++){
  for (ll j=0;j<k;j++){

    vtemp[i][(k-1)-j]= v[i][j];
  }

}
  v = vtemp;

}



}


for (ll i =0;i<b;i++){
  for (ll j =0;j<k;j++){
    cout << v[i][j];
    if (j!=k-1) cout << " ";

    }
  if (i  !=b-1) cout << "\n";

}

return 0;
}

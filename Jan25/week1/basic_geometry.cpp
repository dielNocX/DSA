#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double Ald;
using namespace std;

int main() {

  ll N,size, count;
  char c;

  cin >> N;
  vector<ll> v; vector<string> hasil;
  for (ll k = 0; k<N;++k){

    v.clear();
    cin>>size;
    for(ll i=0;i<size;i++){
        count = 0;
        for(ll j=0;j<size;j++){
          cin >> c;
          if (c=='1') count++;

        }
        if (count != 0) v.push_back(count);
    }

      (max_element(v.begin(),v.end()) == min_element(v.begin(),v.end())) ? hasil.push_back("SQUARE"): hasil.push_back("TRIANGLE");
  }
for (auto x:hasil){

    cout << x <<'\n';
}

  return 0;

}

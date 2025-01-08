#include <iostream>
#include <bits/stdc++.h>

//https://codeforces.com/problemset/problem/1695/B

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){
  vector<string> s;
  ll N, n,a;
  cin >> N;
  vector<ll> v;
  bool cek = true;
  ll minm = LLONG_MAX,minj = LLONG_MAX;

  for (ll j =0;j<N;j++){
    v.clear();
    cek =true;
    minm = 0; minj = 1;
    cin >> n;
    for (ll i =0;i<n;i++){
      cin >>a;
      v.push_back(a);
      if (i%2 ==0 && v[i] < v[minm])minm = i;
      if (i%2 ==1 && v[i] < v[minj])minj = i;
    }


    if (n%2 == 0) {
        if (v[minj] > v[minm]) {
            s.push_back("Joe");
        } else if (v[minj] == v[minm]&& minj>minm) {
          s.push_back("Joe");
        } else {
          s.push_back("Mike");
        }
    } else s.push_back("Mike");
  }

  for (auto hasil : s){
    cout << hasil<<'\n';
  }

  return 0;
}

#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;


int main() {

  ll n,x, count =0;
  unordered_map<ll,ll> v;
  unordered_map<ll,ll> freq;

  cin >> n ;

  for (ll i = 0; i<n;i++){
    cin >> x;
    //v[i] = x;


    if (freq.count(x)>0) {
        count+= freq[x];
        //cout <<x<<"\n" ;
    }


    if (x>sqrt(x)){
        for (ll i = 1; i <= sqrt(x); i++) {
          if (x % i == 0) {

                  if (freq.count(i)>0){
                      if (x / i == i) count += freq[i];
                      else count += freq[i]+freq[x/i];
                      //break;
                  }
          }

        }
    }


    freq[x]++;
  }

  cout << count;



  return 0;
}

#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){


  ll n;
  cin >>n;
  vector<ll> v;

 while (n % 2 == 0) {

        v.push_back(2);
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i*i <= n; i = i + 2) {

        // While i divides n, print i and divide n
        while (n % i == 0) {

        v.push_back(i);
            n = n/i;
        }
    }


    if (n > 2)

        v.push_back(n);


        ll size = v.size();
        for (ll i = 0; i<size; i++){
          cout <<v[i];
          if (i!=size-1) cout <<" x ";
        }



return 0;
}

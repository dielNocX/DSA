#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){



  ll n , p ,x, sum;
  cin >> n>>x>>p;

  ll res = -1;

  ll low =1, high=p;
  while (low <= high) {
        ll mid = low + (high - low) / 2;

        ll sum = mid * (mid+1) /2;

        if ( (x + sum) % n == 0)
            res = mid;

        if (sum < x)
            low = mid + 1;

        else
            high = mid - 1;
    }



  if (res != -1) cout << "Ya";
  else cout << "Tidak";


 return 0;
}





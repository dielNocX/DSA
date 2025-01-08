#include <iostream>
#include <bits/stdc++.h>
#include <string>


typedef long long ll;

using namespace std;

int main()
{

    ll N,D,K, x=0, count =0;

    cin >>N>>D>>K;
    for (ll i=0;i<K;i++){

      for (ll j =1; j<=D;j++){
        if (x+D>N) x = 2*N-x-D;
        else x+=D;

        if(x==N) count++;
      }
    }

    cout <<count;

}

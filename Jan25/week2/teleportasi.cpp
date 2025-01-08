#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll A=0,B=0,X=0,K=0,m=0;
    cin >>A>>B>>X>>K;
    m = abs(B-A)%X;
    m = min(m,X-m);

    if (m<=K) cout <<"Ya";
    else cout <<"Tidak :(";

}


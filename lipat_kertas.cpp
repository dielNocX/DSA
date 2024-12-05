

#include <iostream>

#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){


ll l,w,a;
cin>>l>>w>>a;

ll A = l*w;

while(A%2==0 && A > a){
  A/=2;
}


//a = pow(2,a);
if (A!=a) cout << "TIDAK";
else cout << "YA";


return 0;
}



#include <iostream>

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);



ll A[10];
ll n, m= pow(10,9)+7;
cin>>n;
int start = clock();
ll a,b,c;

a = 1;
b = 2;

if (n==a) cout << a*a;
else if (n==b) cout << b*b;
else{

for (ll i = 3; i <= n; ++i){
    c = (a%m)+(b%m);
    c %= m;
    a=b;b=c;
}

cout<<((c%m)*(c%m))%m;

}

int end = clock();
std::cout << "it took " << end - start << "ticks, or " << ((float)end - start)/CLOCKS_PER_SEC << "seconds." << std::endl;
return 0;
}

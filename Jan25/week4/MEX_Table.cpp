    #include <iostream>
    
    #include <bits/stdc++.h>

    using namespace std;
    #define se second
    #define fi first 
    typedef long long ll;
//https://codeforces.com/contest/2057/problem/A


void solve(){
    ll n,m;
    cin >>n>>m;
    cout << max(n,m)+1<<endl;
}

int main(){
ll t;
cin >>t;
while (t--) solve();

return 0;
}
#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll N,K,Q;
    ll x,y,sum=0;
    ll i=0,j=0,l=0,m ;
    ll a,b;
    char z;

    vector<ll> tot;

    cin >>N>>K>>Q;

    stack<ll> s[N];
    vector<ll> v(N,0);

    for(i=0;i<K;i++){
      //cout << i << " dari"<<K<<"kali perulangan";
      cin>>x>>y;
      s[x-1].push(y);
      v[x-1] = y;
    }

    for(m=0;m<N;m++){
      //cout << i << " dari"<<K<<"kali perulangan";
      sum = sum + v[m];
    }

    //sum = accumulate(v.begin(), v.end(), 0LL);


    //cout << Q << "\n";

    for(j=0;j<Q;j++){
      cin >> z;




      if (z == '?'){
        //sum = 0;
        //for(k=0;k<N;k++){
        tot.push_back(sum);

          //if (!s[k].empty()){
          //sum = sum + s[k].top();
          //}
        //}
        //v.push_back(sum);
      } else if (z=='!') {
        cin >>a>>b;
        if (!s[a-1].empty()){
          sum = sum - s[a-1].top();
          if (!s[b-1].empty()) sum = sum - s[b-1].top();
          s[b-1].push(s[a-1].top());
          s[a-1].pop();
          sum = sum + s[b-1].top();
          if (!s[a-1].empty()) sum = sum + s[a-1].top();
        //cout <<"done";
        }
      }


    }

    //if (!v.empty()){

     //     for (auto x :v){
     //   cout << x <<"\n";
      //}
    //}

    if (!tot.empty()) {
    for (l = 0; l < static_cast<ll>(tot.size()); ++l) {
        cout << tot[l];
        if (l < static_cast<ll>(tot.size() - 1)) { // Check if it's not the last element
            cout << "\n";
        }
    }
}
    //cout << "Hello world!" << endl;
    return 0;
}

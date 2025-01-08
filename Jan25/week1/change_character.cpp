#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){

ll inp, small=0, big=0; char x;

cin >> inp;
vector<ll> v(26,0);
//big = inp-1;


    for (ll i =0; i<inp;i++){
      cin >> x;
      ll cur = x-'a';
      v[cur]++;

      if (i==0) small = cur;

      //cout << char(cur +'a') << v[cur]<<"\n";
      if (v[big] < v[cur]) {
        big = cur;
      }

      if (v[small] >= v[cur]) {
        small = cur;
      }
    }
    int start = clock();

    v[big]++;
    v[small]--;

//cout << char(small+'a')<<v[small+'a'] <<char(big+'a')<<v[big+'a'];
    for (ll i =0; i<26;i++){
      for (ll j=0;j<v[i];j++){
        cout << char(i+'a');
      }
}


//sort(v.begin(),v.end());
//v[v.size()-1]= v[0];



/*
    for (ll i =0; i<inp;i++){
      cout << char(v[i]);
    }
int end = clock();
std::cout << "it took " << end - start << "ticks, or " << ((float)end - start)/CLOCKS_PER_SEC << "seconds." << std::endl;
*/
return 0;
}

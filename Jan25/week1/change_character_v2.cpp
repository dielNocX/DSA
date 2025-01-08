#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){

ll N;
ll inp, small=0, big=0; char x;
vector<ll> v(26,0);
vector<string> s;
//big = inp-1;

cin >>N;
for (ll k = 0;k<N;k++){
    string str = "";

    small = -1;
big = -1;
cin >> inp;

// Read the string and update frequencies
for (ll i = 0; i < inp; i++) {
    cin >> x;
    ll cur = x - 'a';
    v[cur]++;

    // Determine the character with the smallest frequency
    if (small == -1 || v[cur] < v[small] || (v[cur] == v[small] && cur < small)) {
        small = cur;
    }

    // Determine the character with the largest frequency
    if (big == -1 || v[cur] > v[big] || (v[cur] == v[big] && cur < big)) {
        big = cur;
    }
}

// Adjust frequencies
if (big != -1 && small != -1) {
    v[big]++;
    v[small]--;
}
//cout << char(small+'a')<<v[small+'a'] <<char(big+'a')<<v[big+'a'];
    for (ll i =0; i<26;i++){
      //s[k].append(v[i], char(i + 'a'));

      for (ll j=0;j<v[i];j++){
        str+= char(i+'a');
      }
    }

//s[k].append(v[i], char(i + 'a'));

  s.push_back(str);
  fill(v.begin(), v.begin()+26, 0);
}


for (ll l = 0;l<N;l++){
  cout<<s[l];
  if (l!=N-1) cout<<"\n";
}

return 0;
}

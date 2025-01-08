#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main() {
    ll N;
    ll inp, min=LLONG_MAX, max=LLONG_MIN;
    vector<string> s;
    vector<char> chars;
    unordered_map<char, ll> freq;

    cin >> N;
    for (ll m =0; m<N; m++){


    min=LLONG_MAX, max=LLONG_MIN;

      char c;

      cin >> inp;
      chars.clear();
      freq.clear();
      for (ll i=0; i<inp;i++){
        cin >> c;
        chars.push_back(c);
        freq[c]++;
      }

      for (char c : chars) {
          freq[c]++;
      }

      char cMin = ' ';
      char cMax = ' ';

      for (auto& cha : freq) {
          if (cha.second > max) {
              max = cha.second;
              cMax= cha.first;
          }
          if (cha.second <= min) {
              min= cha.second;
              cMin = cha.first;
          }
      }


      //cout <<cMin<<cMax<<'\n';


      string str(chars.begin(), chars.end());

      for (ll i =0; i<inp;i++){
        if (str[i] == cMin){
          str[i] = cMax;
          break;

        }

      }

      s.push_back(str);
    }

    for (auto hasil : s){
      cout<<hasil<<'\n';
    }

    return 0;
}

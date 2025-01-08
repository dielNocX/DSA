#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

typedef long long ll;
using namespace std;


int rem(ll num) {
    string numStr = to_string(num);

    cout << numStr <<" ";
    size_t pos = numStr.find("33");
    if (pos != string::npos) {
        numStr.erase(pos, 2);
    }

    cout << numStr <<"\n";

    return stoll(numStr);
}


int main() {
  ll n;
  unordered_map<ll,bool> dp;

  cin >>n;
  dp[0] = true;
  dp[33] = true;

  for (ll i=0;i<33;i++){
    dp[i] = false;

  }

  for (ll i=34;i<=n;i++){
    dp[i] = dp[i-33];

    if (!dp[i] && to_string(i).find("33") != std::string::npos) {
      dp [i] = dp[rem(i)];
    }
  }


  cout << dp[n];
}

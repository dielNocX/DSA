#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
  ll x,k=1, sum=0, count=0;
  cin >>x;
  while(sum < x){
    sum +=k;
    k++;

  }


  count =k;
  while (sum>=x && k>1){
    if (sum-k >= x) sum-=k;
    k--;
  }
  //cout <<count<<endl;
  cout << count-1 +sum-x;

  return 0;
}

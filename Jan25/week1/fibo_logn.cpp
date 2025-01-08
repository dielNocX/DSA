
//Olimpiade Sains Al Azhar 2024 - Final  A
#include <iostream>

#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){

vector<ll> v;
ll inp, result;
cin >>inp;
    int start = clock();
v.push_back(1);
ll x =1, y=1;
//cout<<"!!!";
while (x+y<inp){
  ll z = x +y;
  v.push_back(z);
  x=y; y=z;
  //cout<< z <<" ";
}

for (ll i=1; i<v.size();++i){

  if (inp%v[i]==0)
  result = inp * v[i-1]/ v[i];
  cout<<result;
  return 0;
}

cout<<-1;
int end = clock();
std::cout <<endl<< "it took " << end - start << "ticks, or " << ((float)end - start)/CLOCKS_PER_SEC << "seconds." << std::endl;
}

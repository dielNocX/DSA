#include <iostream>
#include <queue>


typedef long long ll;

using namespace std;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;

}


int main() {
  ll N,x,temp;


  cin>>N;
  priority_queue<ll,vector<ll>,greater<ll>>pet;


    for(ll i=0;i<N;i++){
      cin>>x;pet.push(x);
  }


    while(pet.size()>1){


    ll a=pet.top();
    pet.pop();

    ll b=pet.top();

    pet.pop();

    temp=(a+b)/gcd(a,b);
    pet.push(temp);}

    if(!pet.empty())cout<<pet.top();



return 0;
}

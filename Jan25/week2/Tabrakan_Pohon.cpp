#include <iostream>
#include <bits/stdc++.h>



#define v1(E) (E).vertex1
#define v2(E) (E).vertex2
#define jarak(E) (E).jarak

using namespace std;

typedef long long ll;

typedef long double ld;

struct Edge {
    ll jarak, vertex1, vertex2;

    bool operator>(const Edge &dis)const{
        if (jarak == dis.jarak) return vertex1 < v1(dis);

        return jarak > jarak(dis);


    }
};



int main() {
    ll N, jarak;
    cin >> N;

    vector<ll> vertices(N);
//vector<ll> v(N);

    vector<ll> num(N);

    for (ll i = 0; i < N; i++) {
        cin >> vertices[i];
        num[i] = i + 1;
    }

    priority_queue<Edge, vector<Edge>, greater<Edge>> Q;


    for (ll k = 0; k < N; k++) {
            for (ll j = k + 1; j < N; j++) {

            jarak = abs(vertices[k] - vertices[j]);
            Edge X = {(jarak+1)/2, num[k], num[j]} ;
            Q.push(X);
            }

//cout << "Done";

    }

    set<ll> pohon(num.begin(), num.end());

    while (pohon.size() >= 2) {

      Edge E = Q.top();
      Q.pop();
          if (pohon.find(v1(E)) != pohon.end() && pohon.find(v2(E)) != pohon.end()) {

              cout << v1(E) << " " << v2(E)<< " " << jarak(E) << '\n';

              pohon.erase(v1(E));


              pohon.erase(v2(E));
        }}

    return 0;
}

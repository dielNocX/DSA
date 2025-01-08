#include <bits/stdc++.h>
#include <cmath>

typedef long long ll;   
typedef long double ld;
using namespace std;


vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {    
    vector<bool> res;
    int minToMax = *max_element(candies.begin(),candies.end())-extraCandies;

    for (auto i : candies){
        (i >= minToMax) ? res.push_back(true):res.push_back(false); 
    }

    return res;
};


int main() {
    vector<int> A;
    int inp;
    ll n,x;
    cin >>n>>x;
    while (n--){
        cin >>inp;
        A.push_back(inp);
    }

    vector<bool> v = kidsWithCandies(A, x);
    for (auto res : v) cout <<res<<' ';
    return 0;
}



#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define se second
#define fi first
typedef long long ll;

long long maximumCoins(vector<vector<int>>& coins, int k) {
            
            unordered_map<long long,long long> sum;
            long long maks =0;
            for (long long i=0;i<coins.size(); i++){
                for(long long j=coins[i][0];j<=coins[i][1];j++){
                    A[j] = coins[i][2];
                    if (coins[i][1] > maks) maks= coins[i][1];
                }

            }  
            sum[-1]=0;
            sum[0] =A[0];
            for(long long i = 1;i<=maks;i++){
                    sum[i] = sum[i-1];
            }

            long long res=0;
            for(long long i = 0;i<=maks-4+1;i++){
                  res = max(res, sum[i+3]-sum[i-1]);
            }

        return  res;
}


int main(){
    vector<vector<int>> coins = {{8,10,1},{1,3,2},{5,6,4}};
    cout << maximumCoins(coins,4);
    return   0;
}
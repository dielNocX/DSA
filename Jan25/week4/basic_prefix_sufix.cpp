#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> bef, aft;
        bef[-1]=1;
        aft[n]=1;
        for(int i =n-1;i>=0;i--){
            aft[i] = aft[i+1]*nums[i];
        }
        for(int i=0;i<n;i++){
            bef[i] = bef[i-1]*nums[i];
        }

        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back(aft[i+1]*bef[i-1]);
        }

        return res;
    }

int main(){
    vector<int> v ={-1,1,0,-3,3};
    v = productExceptSelf(v);

    for (auto res : v) cout <<res<<' ';
    return 0;
}
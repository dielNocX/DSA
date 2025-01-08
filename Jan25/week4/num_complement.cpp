


#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

typedef long long ll;   
typedef long double ld;
using namespace std;

int maxOperations(vector<int>& nums, int k) {
        int count =0;
        unordered_map<int,int> m;
        for (int i=0;i<nums.size();i++){
            if (m[k-nums[i]]){
                count++;
                m[k-nums[i]]--;
            } else {
                m[nums[i]]++;
            }
        }
        return count;
    }


int main() {
    
    vector<int> v ={3,1,3,4,3};
    cout << maxOperations(v,6);
    
    return 0;
}
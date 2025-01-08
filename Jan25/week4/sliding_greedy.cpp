#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool increasingTriplet(vector<int>& nums) {
     if (nums.size()<3) return false;

     int l =INT_MAX;
     int r= INT_MAX;
     bool temp = 0;
     for (int i=0;i<nums.size();i++){
        if (nums[i]<=l) l =nums[i];
        else if (nums[i]<= r) r = nums[i];
        else temp = 1;
        if (temp) return temp;
     }
     return false;
    }

int main(){
    vector<int> v ={2,1,5,0,4,6};
    cout << increasingTriplet(v);

    
    return 0;
}
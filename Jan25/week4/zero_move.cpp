#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int count=0;
        for (int i=0;i<nums.size();i++){
            if ((nums[i])!=0){
                swap(nums[count],nums[i]);
                count++;
            }


        }

        int zero = nums.size()-count;
        for (int i=0;i<zero;i++){
            nums.pop_back();
        }
        while (zero--){
            nums.push_back(0);
        }

}


int main() {
    
    vector<int>  v = {0,0,1};
    moveZeroes(v);
    for (auto res : v){
        cout << res<<' ';
    }
    return 0;
}
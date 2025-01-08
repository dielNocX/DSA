#include <iostream>
#include <vector>
using namespace std;


bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count =0;
        if ((flowerbed.size()==1 && flowerbed[0]==0)||(flowerbed.size()>1 && !(flowerbed[0] | flowerbed[1] ))){
            count++;
            flowerbed[0] =1;
        }
        flowerbed.push_back(0);
        
        for (int i =1;i<flowerbed.size()-1;i++){
            if (!(flowerbed[i-1]|flowerbed[i]|flowerbed[i+1])) {
                flowerbed[i]=1;
                count++;
            }
        }

        return (count >= n);
    }

int main(){

    vector<int> v = {0,0};
    cout << canPlaceFlowers(v,2);
    return 0;
}

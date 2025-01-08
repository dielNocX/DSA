#include <iostream>

using namespace std;

int countSetBits(int num) {
    int count = 0;
    while (num) {
        if (num & 1) {
            count++;  // Increment count if the last bit is 1
        }
        num >>= 1;  // Right shift the number to check the next bit
    }
    return count;
}

int main() {
    int A[3] ={7,8,1};
    int num=(A[1]|A[0])+(A[2]|A[0])+(A[1]|A[2]);
    //cin >> num;  // Input the number
    
    // Count set bits using the loop method
    cout << "inp set bits: " << countSetBits(15) << endl;
    cout << "out of set bits: " << countSetBits(num) << endl;
    
    return 0;
}

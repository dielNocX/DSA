

#include <iostream>

#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
using namespace std;

int main(){


ll inp,hasil=-1;
cin>>inp;
    int start = clock();
ll A,B,C;

A=1;
B=1;

do {
  C = A + B;
  A = B; B= C;
  //cout<<A[i]<< " ";
} while (C < inp && inp%C != 0);


if (inp%C == 0){
  hasil = inp*A /C;
}

cout<<hasil;
int end = clock();
std::cout << "it took " << end - start << "ticks, or " << ((float)end - start)/CLOCKS_PER_SEC << "seconds." << std::endl;
return 0;
}

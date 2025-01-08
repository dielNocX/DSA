#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

typedef long long ll;   
typedef long double ld;
using namespace std;

//udemy backtracking


void findSubsets(char *input, char *output, ll i, ll j){

    if (input[i] == '\0'){
        output[j] = '\0';
        if(output[0] == '\0'){
            cout<<"NULL";
        }
    cout << output<<'\n';
    return;


    }
    output[j]=input[i];
    //include ith letter 
    findSubsets(input,output,i+1,j+1);
    //exclude ith letter (overwrite)
    findSubsets(input,output,i+1,j)  ;  
}

int main() {
    char input[10000];
    char output[10000];
    cin>>input;
    findSubsets(input, output,0,0);


    return 0;
}

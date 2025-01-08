#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

string reverseVowels(string s) {
        unordered_map<char,bool> m;
        m['A'] = true;
        m['I'] = true;
        m['U'] = true;
        m['E'] = true;
        m['O'] = true;
        m['a'] = true;
        m['i'] = true;
        m['u'] = true;
        m['e'] = true;
        m['o'] = true;
        int l = 0;
        int r = s.length()-1;
        while (l < r){
            while (l < r & !m[s[l]]){
                l++;
            }

            while (l < r & !m[s[r]]){
                r--;
            }

            if (m[s[r]] && m[s[l]])swap(s[l],s[r]);
            l++;
            r--;
        }
        return s;
}


int main(){

    string inp;
    cin >> inp;
    cout << reverseVowels(inp);
    return 0;
}
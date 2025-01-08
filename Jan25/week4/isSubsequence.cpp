#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

typedef long long ll;   
typedef long double ld;
using namespace std;

bool isSubsequence(string s, string t) {
	int j=0;
	for (int i =0;i<t.length();i++){
		if (t[i]==s[j]){
			j++;
		}
		if (j==s.length()) return true;
	}
	if (j==s.length()) return true;
	return false;
}


int main() {
    
    string s ="abc", t="ahbgdc";

	cout << isSubsequence(s,t);
    
    return 0;
}
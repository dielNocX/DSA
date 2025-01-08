#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int compress(vector<char>& chars) {
  int count =1;

  string s="";
  for (int i = 1; i < chars.size();i++){
    if  (chars[i]==chars[i-1]){
      count++;
    } else {
      s += chars[i-1];
      if (count>1) s += to_string(count);
      count = 1;
    }

  }

  s +=  chars.back(); 
  if (count>1) s += to_string(count);

  chars.clear();  

  for (auto c : s) chars.push_back(c);

  return chars.size();
}


int main() {
  string x ="abbbbbbbbbbbb";
  vector<char> v(x.begin(),x.end());
  cout <<compress(v);
  for (auto res : v) cout << res;
  return 0;
}
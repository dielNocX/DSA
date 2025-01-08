#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<char> vec = {'H', 'e', 'l', 'l', 'o'};

    // Convert vector<char> to string using string constructor
    string str(vec.begin(), vec.end());

    cout << "String: " << str << endl;

    return 0;
}

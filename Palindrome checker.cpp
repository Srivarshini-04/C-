#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, reverseStr;
    cout << "Enter a string: ";
    cin >> str;

    reverseStr = str;
    reverse(reverseStr.begin(), reverseStr.end());

    if (str == reverseStr) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }
    return 0;
}

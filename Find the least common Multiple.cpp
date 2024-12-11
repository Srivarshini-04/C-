#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Calculate LCM
    int lcm = (a * b) / __gcd(a, b);

    cout << "LCM is: " << lcm << endl;
    return 0;
}

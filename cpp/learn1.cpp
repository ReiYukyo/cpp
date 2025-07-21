#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int a, b;
    cin >> a >> b;
    cout << "Sum: " << a+b << endl;
    cout << "Product: " << a*b << endl;
    return 0;
}
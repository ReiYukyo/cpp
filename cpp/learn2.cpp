#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int c;
    char ascii = 'A';
    int asciii = ascii;
    cout << "Hello, World!" << "\n";
    cout << "Sum: " << a + b << "\n";
    cout << "Product: " << a * b << "\n";
    cout << "ASCII value of " << ascii << " is " << asciii << "\n";
    cout << "Enter the value of age: ";
    cin >> c;
    cout << "Your age is: " << c << "\n";
    for (int i = 0; i<10; i+=2){
        cout << "Current value of i: " << i << "\n";
         
    } 
    
    
    return 0;
}
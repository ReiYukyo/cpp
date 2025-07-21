#include <iostream>
using namespace std;
// bitwise oprerations

//func to reverse an integer
int fn(int num){
    int rev=0;
    while(num > 0){
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
int main() {
    int a=4, b=8;
    cout << (a & b) << endl; // bitwise AND
    cout << (a | b) << endl; // bitwise OR 
    cout << (a ^ b) << endl; // bitwise XOR
    cout << (~a)    << endl; // bitwise NOT
    cout << (a << 1) << endl; // left shift
    // ^ a* 2**b == a << b
    cout << (b >> 1) << endl; // right shift
    // ^ a / 2**b == a >> b

    // data modifiers
    cout << sizeof(int) << endl; // size of int
    cout << sizeof(long int) << endl; // size of long
    cout << sizeof(long long int) << endl; // size of long long
    cout << sizeof(short int) << endl; // size of short
    cout << sizeof(unsigned int) << endl; // size of unsigned int (only +ve integers)
    cout << sizeof(signed int) << endl; // size of signed int

    // reversing an integer
    fn(12);
    cout << fn(12) << endl; // prints 21
}

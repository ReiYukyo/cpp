#include <iostream>
using namespace std;

//function prototype
void sumofdigits(int n);
int factorialiteration(int n);
int factoralrecusion(int n);
int nCr(int n, int r);
void checkprime(int n);
void separator();
// ^ function declaration
int main(){
    // separator();
    // sumofdigits(69);
    // separator();
    // nCr(5, 2);
    // cout << "5C2 = " << nCr(5, 2) << '\n';
    separator();
    checkprime(30);
    separator();
    return 0;
}
void sumofdigits(int n){
    int sum=0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    cout << "Sum of digits: " << sum << '\n';
}
int factoralrecusion(int n){
    if (n==0||n==1) return 1;
    return n * factoralrecusion(n-1);
}
int factorialiteration(int n){
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int nCr(int n, int r){
    return factorialiteration(n) / (factorialiteration(r) * factorialiteration(n - r));
}
void checkprime(int n){
    if (n<=1){
        cout << n << " is not a prime number." << '\n';
        return;
    }
    for (int i=2; i*i<= n; i++ ){
        if (n % i == 0) {
            cout << n << " is not a prime number." << '\n';
            return;
        }
    }
    cout << n << " is a prime number." << '\n';
}
void separator(){
    cout << "========================" << '\n';
}
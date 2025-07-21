#include<iostream>
using namespace std;

void binumber(long long int n){
    if (n == 0) return;
    binumber(n / 2);
    cout << n % 2;
}
void binnumberiteration(long long int n){
    long long int ans = 0;
    long long int pow = 1;
    while (n > 0) {
        ans += (n % 2) * pow;
        n /= 2;
        pow *= 10;
    }
    cout << ans;
    return;
}
void bintodeci(int num){
    int ans=0, pow =1;

    while (num>0){
        int rem = num%10;
        ans += rem * pow;
        num /= 10;
        pow *= 2;

    }
    cout << ans;
    return;
}
int main(){
    long long int n = 255;
    binumber(n);
    cout << endl;
    binnumberiteration(255);
    cout << endl;
    bintodeci(111111111);
    cout << endl;
    return 0;
}
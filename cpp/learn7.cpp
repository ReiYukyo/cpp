#include <iostream>
using namespace std;
// arrays
void separator(){
    cout << "========================" << '\n';
}
void funcar(int x[], int n){
    for(int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
}
void revarr(int x[], int n) {
    for(int i = 0; i < n / 2; i++) {
        int temp = x[i];
        x[i] = x[n - i - 1];
        x[n - i - 1] = temp;
    }
}
void revarr2pointer(int x[], int n){
    int *start = x;
    int *end = x + n - 1;
    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    int ar1[] = {1,2,3,4,5};
    int ar2[] = {1,2,3,4,5,6,7,8,9};
    //loop in ar
    funcar(ar1, sizeof(ar1)/sizeof(ar1[0]));
    separator();
    revarr(ar1, sizeof(ar1)/sizeof(ar1[0]));
    funcar(ar1, sizeof(ar1)/sizeof(ar1[0]));
    separator();
    revarr2pointer(ar2, sizeof(ar2)/sizeof(ar2[0]));
    funcar(ar2, sizeof(ar2)/sizeof(ar2[0]));
    separator();
}
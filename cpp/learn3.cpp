// patterns
#include <iostream>
#include <string>
using namespace std;
// v function prototypes
void number(int n, int m, int num);
void startri(int n, int m, string pattern);
void triangle(int n, int m, int num);
void idk(int n, int m);
void backwardLoop(int n, int m);
void floydloop(int n, int m, int num = 1);
void invertedtriangle(int n, int m, int num=1);
void pyramid(int n, int m=0, int num=1);
void hollowdiamond(int n, int m=0, int num=0);
void butterfly(int n, int m=0, int num=0);
void separator();
// ^ Function declaration
int main() {
    
    // number(3, 3, 1); 
    // separator();
    // startri(6, 3, "NOL ");
    // separator();
    // triangle(3, 3, 1);
    // separator();
    // idk(3, 3);
    // separator();
    // backwardLoop(3, 3);
    // separator();
    // floydloop(3, 3);
    // separator();
    // invertedtriangle(4,0);
    // separator();
    // pyramid(10);
    // separator();
    // hollowdiamond(4);
    // separator();
    // butterfly(5);
    // separator();
    return 0;
}
void number(int n, int m, int num){
    // int n=3;
    // int m=3;
    // int num=1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << num;
            num++;
        }
        cout << "\n";
    }
    
}
void startri(int n, int m, string pattern){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << pattern;
        }
        cout << "\n";
    }
}
void triangle(int n, int m, int num){
    for (int i = 0; i < n; i++){
        for (int j=0; j<i+1; j++){
            cout << num;
            num++;
        }
        cout << "\n";
    }
}
void idk(int n, int m) {
    for (int i=0; i<n; i++){
        int num =1;
        for (int j = 0; j<i+1; j++){
            cout << num;
            num++;
        }
        cout << "\n";
    }
}
void backwardLoop(int n, int m){
    for (int i=0; i<n; i++){
        for (int j=i+1; j>0; j--){
            cout << j;
        }
        cout << "\n";
    }
}
void floydloop(int n, int m, int num){
    for (int i=0; i< n; i++){
        for (int j=0; j<i+1; j++){
            cout << num;
            num++;
        }
        cout << "\n";
    }
}
void invertedtriangle(int n, int m, int num){
    for(int i=0; i<n; i++){// prints v
        for(int j=0; j<i; j++){// 111
            cout << " ";       //  22
        }                      //   3
        for (int k=0; k<n-i; k++){
            cout << num;
            
        }
        num++;
        cout << '\n';
    }
}
void pyramid(int n, int m, int num){
    for (int i=0; i<n; i++){
        int num = 1;
        for(int j=0; j<n-i-1; j++){ // spaces
            cout << "    ";
        }
        for (int k=0; k<i+1; k++){ // numbers1
            cout << "'" << k+1 << "'"; 
        }
        for (int l=i; l>0; l--){ // numbers2
            cout << "'" << l << "'";
        }
        cout << "\n";
    }
}
void hollowdiamond(int n, int m, int num){
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            cout << " "; // spaces
        }
        cout << "*";
        if( i!=0){
            for(int k=0; k<2*i-1; k++){
                cout << " "; // spaces
            }
            cout << "*"; // stars
        }
        
        cout << '\n';
    }
    // Lower part of the diamond
    for (int i=0; i<n-1; i++){
        for(int j=0; j<i+1; j++){
            cout << " "; // spaces
        }
        cout << "*";
        if (i != n-2) {
            for (int k=0; k<2*(n-2-i)-1; k++){
                cout << " "; // spaces
            }
            cout << "*"; // stars
        }
        cout << '\n';
    }
}
void butterfly(int n, int m, int num){
    for( int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout << "*";
        }
        for (int k=((2*(n-i-1))); k>0; k--){
            cout << " "; // spaces

        }
        for (int a=0; a<i+1; a++){
            cout << "*";
        }
        cout << '\n';
    }
    for (int i=n; i>0; i--){
        for(int j=0; j<i; j++){
            cout << "*";
        }
        for (int k=0; k<((2*(n-i))); k++){
            cout << " "; // spaces
        }
        for ( int a=i; a>0; a--){
            cout << "*";
        }
        cout << '\n';
    }
}
void separator() {
    cout << "=========================\n";
}
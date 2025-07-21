#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void s(){
    cout<< '\n';
    cout << "======================";
    cout<<'\n';
}
double bipow(double x, int n){
    double ans=1;
    long long binForm = n;
    if (n<0){
        x = 1/x;
        binForm = -binForm;
    }
    while(binForm>0){
        if (binForm & 1) { ans *= x; }

        x *=x;
        binForm >>=1;
    }
    return ans;
}
// bin expo
int main(){
    double no;
    int power;
 cout<<"Input the number: ";
 cin >> no;
 cout<<"Input the power: ";
 cin>> power;
 double ans =bipow(no, power);
 cout << "The evaluation of " << no<<"^"<<power<<" is : " << ans;
 s();
 
    return 0;
}
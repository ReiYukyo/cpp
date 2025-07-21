#include <iostream>
#include <vector>
using namespace std;

// vector
void reversevec(vector<int>& n, int i){
    for(int j = 0; j < i / 2; j++) {
        int temp = n[j];
        n[j] = n[i - j - 1];
        n[i - j - 1] = temp;
    }
}
int main(){
    vector<int> v1;
    vector<int> v2(10); // 10 elements, default initialized to 0
    vector<int> v3={1, 2, 3, 4, 5}; // initializer list
    for(int val: v3){
        cout << val << " ";
    }
    v1.push_back(6); // add an element to the end
    v1.pop_back(); // remove the last element
    v1.push_back(7);
    v1.front()= 10; // set the first element
    v1.back()= 20; // set the last element
    v1.at(0)= 30; // set the first element using at()
    cout << endl;


    vector<int> v4;
    v4.push_back(1);
    v4.push_back(2);
    v4.push_back(3);
    cout << "size of v4 " << v4.size() << endl; // size of the vector
    cout << "capacity of v4 " << v4.capacity() << endl; // capacity of the vector

    // letcode q 136 single number
    vector<int> v={10,1,2,1,2};
    int ans=0;
    for(int val: v){
        ans ^= val; // XOR operation
    }
    cout << "the single unique number in vector v " << ans << endl; // return the result
    //
    // reverse vector
    cout << "vector before reverse: ";
    for(int val: v3){
        cout << val << " ";
    }
    cout << endl;
    reversevec(v3, v3.size());
    cout << "vector after reverse: ";
    for(int val: v3){
        cout << val << " ";
    }
    cout << endl;
    return 0; // end of the program
}
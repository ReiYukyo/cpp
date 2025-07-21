#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
//pair sum
//majority element
void s(){
    cout<< '\n';
    cout << "======================";
    cout<<'\n';
}
int main(){
    s();
    vector<int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(11);
    v.push_back(15);
    int n = v.size();
    int target = 18;
    vector<int> answer;
    for(int i=0; i<n; i++){
        for(int j=1+i; j<n; j++){
            if(v[i]+v[j]==target){
                answer.push_back(i);
                answer.push_back(j);

            }
        }
    }
    cout <<"index are : "<< answer[0] << " " << answer[1] << '\n';
    cout << "pair is: " << v[answer[0]] << " & " << v[answer[1]];

    s();
    //2pointedaproach
    int a =0;
    int e = n-1;
    while(a<e){
        int ps = v[a] + v[e];
        
        if(ps == target){
            cout<< "index, values are: ";
            cout << a << " : " << v[a];
            cout <<", ";
            cout << e << " : " << v[e];
            break;
        }
        else if(ps > target){
            e--;
        }
        else if(ps < target) {
            a++;
        }
        
    }
    s();
    //majority element
    vector<int> t;
    t.push_back(1);
    t.push_back(2);
    t.push_back(2);
    t.push_back(2);
    t.push_back(1);
    int m = t.size();
    for(int i : t){
        int freq=0;
        for(int e : t){
            if ( e == i){
                freq++;
            }
        }
        if(freq>m/2){
            cout << i;
            break;
        }
    }
    s();
    vector<int> st =t;
    sort(st.begin(),st.end());
    int f=1, answ= st[0];
    for (int i=1; i<m; i++){
        if(st[i]== st[i-1]){
            f++;
        } else{
            f=1;
            answ = st[i];
        }
        if ( f> m/2){
            cout << answ;
            break;
        }
    };
    s();
    //moee voting algo
    int fr = 0, answe=0;
    for(int i=0; i<m; i++){
        if(fr==0){
            answe=t[i];

        }
        if(answe==t[i]){
            fr++;
        }
        if(answe!=t[i]){
            fr--;
        }
    }
    int count =0;
    for(int val: t){
        if(val==answe){
            count++;
        }
    }
    if(count>m/2) {
        cout<<answe;
    }else{
        cout << -1;
    }
    s();
    return 0;
}
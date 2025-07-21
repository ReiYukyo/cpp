#include <iostream>
using namespace std;
void sep(){
    cout << '\n';
    cout << "=================================";
    cout << '\n';
}
// sub array 
int main() {
//max subarry sum
    int n=5;
    int arr[5]= {1,2,3,4,5};
    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    sep();
    int maxsum = INT_MIN;
    for(int st=0; st<n; st++){
        int sum=0;
        
        for(int end=st; end<n; end++){
            sum += arr[end];
            maxsum = max(sum, maxsum);
        }
    }
    cout <<"max sum : "<< maxsum;
    sep();
    //kadane's algorithm
    int ms = INT_MIN;
    int as = 0;
    int arr2[]={3,-4,5,4,-1,7,-8};
    for(int i=0; i< sizeof(arr2)/sizeof(arr2[0]); i++){
        as +=arr2[i];
        ms = max(ms, as);
        if(as<0){
            as=0;
        }
    }
    cout << "max sum using kadane's theorem: " << ms;
    return 0;
}
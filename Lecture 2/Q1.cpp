#include <iostream>
using namespace std;

int main() {

    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);

    int key = 4;
    int i;

    for(i=0; i<n; i++){

        if( a[i]==key){
            cout<<"Key is found at index : "<<i<<endl;
            break;
        }
    }

    if(a[i] ==n){
        cout<<"Key is not found\n";
    }



    return 0;
}
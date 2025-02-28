#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[] = {1,2,3,4,5,6,7};
    int n = sizeof(a)/sizeof(int);
    int sum;

    int ans = INT_MIN;
    int si;
    int sj;
    int ps[100] = {0};

    //Find the prefix sum first to find range sum
    ps[0] = a[0];

    for(int i=1;i<n; i++){
        ps[i] = ps[i-1]+ a[i];
    }

    //Max Sum Algo
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            sum = ps[j] - (i-1 >=0 ? ps[i-1] : 0);
            
            if(sum > ans){
                ans = sum;
                si = i; //Store the starting index of maxsub Array
                sj =j; //Store the ending index of maxsub Array
            }
        }
    }
    cout<<"Sum: "<<ans<<endl;
    for(int i=si; i<sj;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;

    return 0;
}
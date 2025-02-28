#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    int sum;
    int ans = INT_MIN;
    int si;
    int sj;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            sum=0;
            for (int k=i; k<j; k++)
            {
                sum+=a[k];   
            }
            
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
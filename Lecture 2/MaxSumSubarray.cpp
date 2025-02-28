#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    int sum;
    int ans = INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            sum=0;
            for (int k=i; k<j; k++)
            {
                cout<<a[k]<<" ";
                sum+=a[k];
                
            }
            ans=max(ans,sum);

            cout<<"Sum is : "<<sum<<endl;
            
        }
    }
    cout<<"max sum: "<<ans<<endl;

    return 0;
}
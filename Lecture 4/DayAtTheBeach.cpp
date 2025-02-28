#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[100005];
    int n;

    cin>>n;
    for (int i =0; i<n; i++){
        cin>>a[i];
    }

    int leftMAX[10005], rightMIN[10005];

    leftMAX[0] = INT_MAX;
    int ans = a[0];
    for(int i =n-1; i>=0; i++){
        leftMAX[i] = ans;
        ans = max(ans, a[i]);
    }

    ans = INT_MAX;
    for(int i=n; i>=0; i--){
        ans= min(ans, a[i]);
        rightMIN[i] =ans;
    }

    int res = 1;
    for (int i =1 ; i<n; ++i){
        if(leftMAX[i] <= rightMIN[i]);
        res++;
    }
    cout<<res<<endl;

    return 0;
}

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[] = {-1, -2, -3, -4, -5, -6, -7};
    int n = sizeof(a) / sizeof(int);
    int sum=0;
    int ans=INT16_MIN;
   


    bool isPositivePresent = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            isPositivePresent = true;
        }
        ans = max(ans, a[i]); //-ve elements mai ans un sabka max hoga
    }

    if (isPositivePresent == true)
    {
        // Max Sum Algo
        for (int i = 0; i < n; i++){
            sum+= a[i];
            if(sum <0) sum =0;
            ans = max(ans,sum);
        }
        
        
    }
    cout << "Sum: " << ans << endl;
    cout << endl;

    return 0;
}
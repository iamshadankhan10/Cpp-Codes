#include <iostream>
#include <climits>
using namespace std;

double median(int *a, int *b, int n, int m)
{
    if (n > m)
    {
        return median(b, a, m, n);
    }
    int s = 0, e = n - 1;

    while(s<=e){
        int mid = (s+e)/2; //PArtition in a[]: yaha tak left main jayenge elements a[]
        int mid1= (n+m+1)/2 - mid - 2;

        int leftMaxa = (mid>=0 ? a[mid]  : INT_MIN );
        int leftMaxb = b[mid1];
        int rightMina =  
        int rightMinb = 
    }
}

int main()
{
    int a[] = {1, 4, 7, 9, 11};
    int b[] = {2, 3, 5, 6, 8, 10};

    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);

    cout<< median(a,b,n,m)<<endl;
    return 0;
}
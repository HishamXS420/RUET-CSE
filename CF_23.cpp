#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,i,sum=0;
    cin>>n>>h;
    int a[n];

    for(i=0;i<n;i++) //a[i]<=h ; w = 1 & a[i]>h ; w=2;
    {
        cin >> a[i];
        if(a[i]<=h)
        {
            sum = sum +1;;
        }
        else if(a[i]>h)
        {
            sum=sum+2;
        }
    }
    cout << sum << endl;
    return 0;
    

}

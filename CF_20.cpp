#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0,max=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i] >>b[i];
    }
    for(i=0;i<n;i++)
    {
        sum = sum - a[i] + b[i];
        if(sum>=max)
        {
            max = sum ;
        }
    }
    cout << max << endl;
    return 0;
}


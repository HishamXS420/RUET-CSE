#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,count=0;
    cin >> n;
    int p[n],q[n];
    for(i=0;i<n;i++)
    {
        cin >> p[i] >> q[i];
    }
    for(i=0;i<n;i++)
    {
         if(q[i] > p[i]+1)
    {
        count++;
    }
    }
    cout << count << endl;
   
}


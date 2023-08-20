#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w,t,o,i,sum = 0;
    cin >> k >> n >> w;
    for(i=1;i<=w;i++)
    {
        t = i*k;
        sum += t;
    }
     o = sum - n;
    if(o>=0)
    {
       cout << o << endl;
    }
   else
   {
     cout << "0" << endl;
   }
  
  
    return 0;
}
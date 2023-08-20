#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,i;
    cin >> t;
    while(t--)
    {
    int n,sum=0,div=0,one=0;
    cin >> n ;
    for(i=0;i<n;i++)
    {
      cin>>a;
      if(a==1)
      {
        one++;
        sum++;
      }
      else 
      {
        sum+=2;
      }
    }
    if(sum%2==0)
    {
      div = sum/2;
      if(div%2==0)
      {
        cout <<"YES" <<endl;
      }
      else
      {
        if(one!=0) // one is checked on the inputs to show that div%2 can be else than zero to print yes
        {           //mainly checked when input is 2
          cout <<"YES" <<endl;
        }
        else{
        cout <<"NO" <<endl;
        }
      }
    }
    else{
      cout <<"NO" <<endl;
    }
   

}
return 0; 
}


// 4                      4
// 2 1 2 1 = 6            2 1 1 1 
// one = 2                
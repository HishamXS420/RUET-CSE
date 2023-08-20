#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,k,l=0;
        cin >> n >> m >> k ;
        int a[k*2];
        int x,y;
        cin >> x >> y;
        for(int i=0;i<(k*2);i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<(k*2);i=i+2)
         {
            if(x==a[i] && y==a[i+1])
            {
                l=1;
                break;
            }
            else if((x+y)%2==0 && (a[i]+a[i+1])%2==0)
             {
                l=1;
                break;
            }
            else if((x+y)%2==1 && (a[i]+a[i+1])%2==1)
             {
                l=1;
                break;
            }
            else
            {
                l=0;
            }
            
         }
         if(l==1)
         {
            cout << "NO" << endl;
         }
         else
         {
             cout << "YES" << endl;
         }

    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;
    while(t--)
    {
       
        int n,m,k;
    cin >> n>>m>>k;
    int x[k],y[k];
    
    int s=0;
    for(i=0;i<=k;i++)
    {
         cin >> x[i];
         cin >> y[i];
       if(i!=0)
       {
             s +=abs(x[i]-x[0])+abs(y[1]-y[0]); 
             
       
       }
             
       
         
      

        }
       

       if(n+m>s)
       {
        cout << "YES" <<endl;
       }
       else if(n+m==s || n+m<=s) {
         cout << "NO" <<endl;
       }
        
    }
   
   
   return 0; 
}



   
   
    
    
   
    
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,flag;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        
    }
    for(i=0;i<n;i++)
    {
        flag=0;
       if(a[i]!=0){
      flag=1; 
        break;
       }
       
        
    }
    if(flag==1)
    {
        cout << "HARD"<< endl;
    }
    else if(flag==0)
    {
        cout << "EASY" << endl;
    }
   
 return 0;
}
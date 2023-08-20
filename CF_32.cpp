#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
   int n,i,j;
   
  
   cin >>n;
   for(i=1;i<=n;i++)
   {
     if(n==1)
    {
    cout << "I hate it" << endl;
    break;
    }
    if(n%2==0)
    {
      cout << "I hate ";
      for(j=1;j<n/2; j++)
    {
    cout << "that I love that I hate ";
    }
    cout << "that I love it";
    break;
    }
    else if(n%2!=0)
    {
    cout << "I hate ";
    for(j=0;j<n/2 ; j++){
    cout << "that I love that I hate ";
    }
    cout << "it";
    break;
    }
}
   
   return 0;
}
#include<iostream>
using namespace std;
              
int main(){
      int i,j,n,c=0;
      cin>> n;
    int h[n],a[n];
    for(i=0;i<n;i++)
    {
        cin >> h[i] >> a[i];
    }  
    for(i=0;i<n;i++)
    {
       for(j=0;j<i;j++)
       {
        if(h[i]==a[j] )
        {
            c++;
           
            cout << i << " " << j << " " << h[i] << " " << a [j] << endl;
        }
         if(h[j]==a[i]){
            c++;
            cout << i << " " << j << " " << h[j] << " " << a [i] << endl;
        }
       
       }
    }  


    
    cout << c << endl;         
              
              
return 0;
}
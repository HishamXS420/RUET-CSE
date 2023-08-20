#include<iostream>
using namespace std;
              
int main(){
              
  int n,hu=0,te=0,tw=0,fv=0,i,on=0;
  cin >> n;            
   /*  if(n%100==0)
    {
        hu = n/100;
        n = n%100;
        if(n%50==0)
        {
            fi = n/50;
            n = n%50;
            if(n%20==0)
            {
                tw = n/20;
                n = n%20;
                if(n%10==0){
                    te = n/10;
                n = n%10;
                 if(n%5==0)
                 {
                    fv = n/5;
                    n= n%5;
                    if()
                 }
                }
                
               

            }
        }

    }       
     */

         for(i=0;i<=100;i++)
         {
            if(n>=100 && n!=0)
    {
        hu = n/100;
        n = n%100;
        continue;
    }
   
         else if(n>=20 && n!=0)
            {
                tw = n/20;
                n = n%20;
                continue;
            }
            else if(n>=10 && n!=0){
                    te = n/10;
                n = n%10;
                continue;
            }
            else if(n>=5 && n!=0)
                 {
                    fv = n/5;
                    n= n%5;
                    continue;
                 }
                 else if(n>=1 && n!=0){
                    on = n/1;
                    n= n%1;
                    continue;
                 }
                 else if(n==0)
                 {
                    break;
                 }
         }
         cout << hu+te+tw+fv+on << endl;
return 0;
}
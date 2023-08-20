#include<iostream>
using namespace std;

int main ()
{
    int n,o,count=0,p,q;
    cin >> n;
    if(n>=100)
    {
        o = n / 100;
        p = n%100;
        if(p<20 && p>=10)
        {
            q = p/
        }
    }
    if(n<100 && n>=20)
        {
            p = n / 20;
            if(n<20 && n>=10)
        {
            p = n/10;
        }
         else if(p<10 && p>=5)
        {
            p = n/5;
        }
         else{
             p = n/1;
        }

        }
        else if(n<20 && n>=10)
        {
            p = n/10;
            if(p<10 && p>=5)
        {
            p = n/5;
        }
        else{
             p = n/1;
        }

        }
        else if(p<10 && p>=5)
        {
            p = n/5;
        }
        else{
             p = n/1;
        }


    




    return 0;
}
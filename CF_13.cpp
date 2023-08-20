#include<bits/stdc++.h>
using namespace std;

int main(){
    int p,q,count = 0;
    cin >> p >> q;
   
    while(1)
    {
        if(p > q)
        {
            cout << count<< endl;
            break;
        }
        else if(p == q)
        {
             cout << count+1<< endl;
              break;
        }
        else{
            p = p*3;
            q=q*2;
        }
       count++;
    }
   

    return 0;
}
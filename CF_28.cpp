#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,s=0;
    cin >> n;
   
    
        if(n%2==0)
        {
        s = n/2;
        }
        else if(n%2!=0)
        {
            s = -n/2-1;
        }
       
 
    cout << s << endl;
    return 0;
}


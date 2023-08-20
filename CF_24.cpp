#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
  
    while(1)
    {
        y+=1;
        int a = y/1000; // 1st dgt
        int b = y/100 % 10; // 2nd dgt
        int c = y/10 % 10; // 3rd dgt
        int d = y%10; // 4th;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout << y;
            return 0;
    }
    }
return 0;
}

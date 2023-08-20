#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i,len,temp;
    string s,t;
    cin >> s >> t;
    len = s.size();
    for(i=0;i<len/2;i++)
    {
        temp = t[i];
        t[i] = t[len-i-1];
        t[len-i-1] = temp;
    }
  
    if(s==t)
    {
        cout << "YES" << endl;
    }
    else
    {
         cout << "NO" << endl;
    }
    return 0;
    }

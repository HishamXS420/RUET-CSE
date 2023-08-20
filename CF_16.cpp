#include<iostream>
using namespace std;

int main()
{
    int i,small=0,capital=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            small++;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            capital++;
        }
    }
     for(i=0;i<s.size();i++)
     {
        if(small>=capital)
        {
        if(s[i]>='A' && s[i]<='Z')
        {
           s[i] = s[i]+32;
        }
           
        }
        else
        {
            if(s[i]>='a' && s[i]<='z')
            {
              s[i] = s[i]-32;  
            }
        }

     }
     cout << s << endl;
     return 0;

}
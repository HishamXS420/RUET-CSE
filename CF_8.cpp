#include<iostream>
#include<cstring>
using namespace std;

int main()
{
   int i;
    string f,s; 
   while(1)
   {
    cin>> f >> s;
 for (i=0;i<f.size();i++)
    {
        if(f[i]>='A'&& f[i]<='Z')
        {
            f[i] = f[i]+32;
        }
         if(s[i]>='A'&& s[i]<='Z')
        {
            s[i] = s[i]+32;
        }
    }
    for (i=0;i<s.size();i++)
    {
        if(f[i]>s[i])
        {
            cout<< 1<<endl;;
            return 0;
        }
        if(s[i]>f[i])
        {
            cout<< -1<<endl;;
            return 0;
        }
       
    }
   cout<< 0 <<endl;
   }
    return 0;

}
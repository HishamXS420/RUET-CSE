#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i,j,count=0;
    for(i=0;i<s.size();i++)
    {
        for(j=i+1;j<s.size();j++)
        {
            if(((s[i])!=','||'{'||'}')&&((s[j])!=','||'{'||'}'))
            {
               if(s[i]!=s[j])
        {
             count++;
             
            
        }
        break;
            }
            
        }
    }
    cout<<count<<endl;




    return 0;
}
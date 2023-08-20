#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin >> t;
    while(t--)
    {
        string a,b,c;
        cin >> a >> b >> c;
        for(i=0;i<3;i++)
        {
           if(((a[i]!='.' && b[i]!='.'&&  c[i]!='.') && (a[i+1]!='.' && b[i+1]!='.'&&  c[i+1]!='.') && (a[i+2]!='.' && b[i+2]!='.'&&  c[i+2]!='.'))|| (a[i]!='.' && a[i+1]!='.'&&  a[i+2]!='.') || (a[i]!='.' && b[i+1]!='.'&&  c[i+2]!='.') || (a[i+2]!='.' && b[i+1]!='.'&&  c[i]!='.') )
           {
             if(a[i]==a[i+1] && a[i+1]==a[i+2])
            {
                cout << a[i] << endl;
                break;
            }
            else if(a[i]==b[i] && b[i]==c[i])
            {
                cout << a[i] <<endl;
                
                 break;
            }
            else if (a[i+1]==b[i+1] && b[i+1]==c[i+1])
            {
                cout << b[i+1] << endl;
                break;
            }
            else if(a[i+2]==b[i+2] && b[i+2]==c[i+2])
            {
                cout << c[i+2] << endl;
                break;
            }
            else if(b[i]==b[i+1] && b[i+1]==b[i+2])
            {
                cout << b[i] << endl;
                break;
            }
             else if(c[i]==c[i+1] && c[i+1]==c[i+2])
            {
                cout << c[i] << endl;
                break;
            }
            else if(a[i]==b[i+1] && b[i+1]==c[i+2])
            {
                cout << a[i] << endl;
                break;
            }
            else if(a[i+2]==b[i+1] && b[i+1]==c[i])
            {
                 cout << a[i+2] << endl;
                break;
            }
           }
           else if((a[i]=='.' && b[i]=='.'&&  c[i]=='.') || (a[i+1]=='.' && b[i+1]=='.'&&  c[i+1]=='.') || (a[i+2]=='.' && b[i+2]=='.'&&  c[i+2]=='.')|| (a[i]=='.' && a[i+1]=='.'&&  a[i+2]=='.') || (a[i]=='.' && b[i+1]=='.'&&  c[i+2]=='.') || (a[i+2]=='.' && b[i+1]=='.'&&  c[i]=='.'))
           {
            cout << "DRAW" << endl;
            break;
           }
        }


    }
    
    return 0;
}

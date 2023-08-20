#include<iostream>
using namespace std;

int main()
{
    int n,i,anton=0,danik=0;
    cin >> n;
    string s;
    cin >> s;
   
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            anton++;
        }
        else if(s[i]=='D')
        {
            danik++;
        }
    }
    if(anton>danik)
    {
        cout << "Anton" << endl;
    }
    else if(anton<danik)
    {
        cout << "Danik" << endl;
    }
    else if(anton==danik)
    {
        cout << "Friendship" << endl;
    }
    return 0;
}
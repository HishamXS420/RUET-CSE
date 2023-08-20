#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[200],b[200];
    cin>>a>>b;
    int n = strlen(a);
    for(int i=0;i<n;i++)
    {
        if(b[i]>=65 && b[i]<=90)
        {
            b[i] +=32;
        }
    }
    cout << stricmp(a,b) << endl;
        return 0;
}
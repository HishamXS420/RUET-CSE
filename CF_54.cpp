#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 int q;
 cin >> q;
 while(q--)
 {
    int n,i;
    cin >> n;
    string s,t;
    cin >>s;
    n = s.length();
    for(i=n-1;i>=0;i--)
    {
        if(s[i]!='0')
        {
           t +='a' + s[i] - '0' -1 ; // It becomes a character by removing '0' from it (though it looks like an integer)
        }
        else 
        {
            int temp = s[i-1]-'0'+(s[i-2]-'0')*10 ;
            t += 'a' + temp-1;
            i=i-2;
        }
    }
    reverse(t.begin(),t.end());
    cout << t << endl;
 }
    return 0;
}
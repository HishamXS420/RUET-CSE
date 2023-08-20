#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s;
    cin >> s;
  for(i=0;i<s.size();i++){


    if(s[0]>='a'&& s[0]<='z')
    {
        s[0] = s[0] - 32;
        cout << s[i];
}
else{
    cout <<s[i];
}
  }
    return 0;
}
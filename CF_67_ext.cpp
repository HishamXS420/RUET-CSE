#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
              
int main(){
        string s1,s2;
        cin >> s1>>s2;
        s1 += s2;
        sort(s1.begin(),s1.end());
        cin >> s2;
        sort(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }

              
              
              
return 0;
}
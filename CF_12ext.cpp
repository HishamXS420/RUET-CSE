
//problem link:http://codeforces.com/contest/266/problem/A
//status:accpted
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,count=0;
     cin >> n;
     string s; 
   cin >> s;
  
    for(i=1;i<n;i++)
    {
        if(s[i-1]==s[i]){
            count++;
        }
        
    }
    cout <<count<< endl;
 
    return 0;
}
#include<iostream>
using namespace std;

int main (){
int N,i,j,count=0;
cin >> N;


char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
string a;
cin >>a;
for(i=0;i<N;i++)
{   
    if(a[i]>='a'&& a[i]<='z')
    {
       a[i]=a[i]-32;
    }
}
   for(i=0;i<26;i++)
{ 
    for(j=0;j<N;j++)
   {
        if(b[i]==a[j])
        {
             count++;
            break;
        }
   }
   

    
    
}


   if(count==26)
   {
    cout << "YES" << endl;
   }
   else{
     cout << "NO" << endl;
   }






return 0;
}
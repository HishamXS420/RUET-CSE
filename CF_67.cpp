#include<iostream>
#include<string.h>
using namespace std;
              
int main(){
    int count = 0;
     string s1;
     string s2;
     string s3;
     string s;
     cin >>s1;
     cin >>s2;
     cin >>s3;
     int n1 = s1.size();
     int n2 = s2.size();
     int n3 = s3.size();
     int flag=0;
     if(n1+n2!=n3)
     {
        cout << "NO" << endl;
     }

     s = s1+s2;
     
     if(n1+n2==n3){
         for(int i=0;i<n3;i++)
         {
            for(int j=i;j<n3;j++)
         {
            
            if(s[i]==s3[j])
            {
                count++;
                
            }
            else
            { 
                continue;
            }
            
         }
         }
        if(count==n3)
        
        {
             cout << "YES" << endl;
            
        }
        else {
            cout << "NO" << endl;
            cout << count << endl; 
        }
     }
    



              
              
              
return 0;
}
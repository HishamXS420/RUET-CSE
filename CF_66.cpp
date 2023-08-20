#include<iostream>
using namespace std;
              
int main(){
   int t,s;
   cin >> t;
   while(t--)
   {
    int a,b,c;
    cin >> a >> b >> c;
    s = a+b+c;
   
   if(a==b && s%2==0)
    {
        cout << "Second" << endl;
    }
    else if(a==b && s%2!=0)
    {
        cout << "First" << endl;
    }   
    else if(a>b) 
    {
        cout << "First" << endl;
    }    
    else if(a<b){
        cout << "Second" << endl;
    }
        
   }           
          
              
return 0;
}
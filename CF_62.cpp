#include<iostream>
using namespace std;
              
int main(){
    int n,i,sum=0;
    cin >> n;
    string s;
            
            
    for(i=0;i<n;i++)
    {
        cin >> s;
        if(s=="Tetrahedron")
        {
            sum = sum + 4;
        }
        if(s=="Cube")
        {
            sum = sum + 6;
        }
        if(s=="Octahedron")
        {
            sum = sum + 8;
        }
        if(s=="Dodecahedron")
        {
            sum = sum + 12;
        }
        if(s=="Icosahedron")
        {
            sum = sum + 20;
        }
        
    }          
      cout << sum << endl;      
              
              
return 0;
}
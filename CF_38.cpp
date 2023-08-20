#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
   int a,b,t,j;
cin >> t;

while(t--){

cin >> a >> b;


if(a%b==0)
{
 cout << "0" << endl;

}
else
{
    int w=a%b; // w=13%9=4
   cout << b-w << endl; //9-4=5

}

}
}

   

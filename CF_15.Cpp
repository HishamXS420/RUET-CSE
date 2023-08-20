#include<iostream>
using namespace std;

int main()
{
    int x,i;
    cin>>x;
    if(x%5==0)
    {
        cout << x/5 << endl;
    }
    else if(x%5!=0)
    {
        cout << x/5 + 1 <<endl;
    }
    
  
    return 0;
    
}


#include<iostream>
using namespace std;

int main()
{
    int i,r,count=0;
   long long int n;
    cin >> n;
    while(n!=0){
        if(n%10==4 || n%10==7)
        {
            count++;
        }
        n /=10;
    }
    if(count==4 || count==7)
    {
        cout << "YES"<< endl;
    }
    else
    {
        cout << "NO"<< endl;
    }
  
   

    return 0;
}
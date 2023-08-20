#include<iostream>
using namespace std;
              
int main(){
    int t,s;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n==2){
            cout << 0 << endl;
        }
        else if(n%2==0)
        {
            s = n/2-1;
        cout << s<<endl;
        }
        else
        {
             s = n/2;
        cout << s<<endl;
        }

    }          
              
              
              
return 0;
}
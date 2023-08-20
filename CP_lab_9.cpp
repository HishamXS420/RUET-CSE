#include<iostream>
using namespace std;
              
int main(){
        int n,sum1=0,sum2=0,i;
        cin >> n;
        int arr[n];
        for(i=0;i<n-1;i++)
        {
            cin >> arr[i];
            sum1 += arr[i];
        }       
        for(i=1;i<=n;i++)
        {
          sum2 += i;
        }       
             cout<<sum2-sum1<<endl; 
              
              
return 0;
}
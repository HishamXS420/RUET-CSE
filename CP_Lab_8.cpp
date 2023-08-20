#include<iostream>
using namespace std;
              
int main(){
            int n,i;
            cin >> n;
            int arr[n];
            for(i=0;i<n;i++)
            {
                cin >> arr[i];
            }
int moves = 0;
int prev = arr[0];
            for(i=1;i<n;i++)
            {
               if(arr[i]<prev)
               {
                moves = moves + prev - arr[i];
               }else
               {
                prev = arr[i];
               }
            }

              
     cout<<"Minimum number of moves required : " << moves << endl;         
              
return 0;
}
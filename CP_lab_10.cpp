#include<iostream>
using namespace std;
              
int main(){
      int t;
      cin >> t;
      while(t--)
      {
         int n,k,count=0,sum=0;
         int i,j;
       cin >> n>> k;
       int arr[n];       
       for(i=0;i<n;i++)
       {
        cin >> arr[i];
        sum += arr[i];
       }       
                  
       for( i=0;i<n;i++)
       {
        
            if(arr[i]+k>sum-arr[i])
            {
                count++;
            }
            else if(arr[i]+k==sum-arr[i] && arr[i]+k!=sum-arr[i])
        {
continue;
        }
        }
            
       cout << count << endl;   
      }
               
              
return 0;
}
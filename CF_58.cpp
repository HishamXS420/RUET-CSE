#include<iostream>
using namespace std;
              
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,temp,i,j;
        cin >> n >> k;
        int a[n];
        int count1=n,count2=n;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n;i++)
        {
            int swapped = 0;
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;

                    swapped = 1;
                }
            }
            if(swapped==0)
            break;
            
        }
       /*  for(i=0;i<n;i++)
        {
            cout << a[i]<<" ";
        } */
        cout << endl;
        for(i=0;i<n;i++)
        {
            if(a[i+1]-a[i]<=k)
            {
                count1--;
            }
            else
            {
                continue;
            }
        }
         for(j=n;j>0;j--)
        {
            if(a[j]-a[j-1]<=k)
            {
                count2--;
            }
            else
            {
                continue;
            }
        }
        if(count1>count2)
        {
            cout << n-count1<< endl;
        }
        else
        {
             cout << n-count2 << endl;
        }




    }    
              
              
              
return 0;
}
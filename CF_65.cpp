#include<iostream>
using namespace std;
              
int main(){
     int n,i,count=0,z=0,o=0;
     cin >> n;
     int l[n],r[n];
     for(i=0;i<n;i++)
     {
        cin >> l[i] >> r[i];
     }
     for(i=0;i<n;i++)
     {
       if(l[i]==0 && r[i]==1)
        {
            o+=1;
        }
        if(l[i]==1 && r[i]==0)
        {
            z+=1;
        }
        if(l[i]==1 && r[i]==1)
        {
             o+=1;
             z+=1;
        }
        if(l[i]==0 && r[i]==0)
        {
            continue;
        }
     }
     
     if(z<=n/2 && o>n/2)
     {
        for(i=0;i<n;i++)
     {
       if(l[i]==0 && r[i]==1)
        {
            count+=0;
        }
        if(l[i]==1 && r[i]==0)
        {
            count+=2;
        }
        if(l[i]==1 && r[i]==1)
        {
            count+=1;
        }
        if(l[i]==0 && r[i]==0)
        {
            count+=1;
        }
     }
     }
     else if(z<=n/2 && o<=n/2)
     {
        for(i=0;i<n;i++)
     {
       if(l[i]==0 && r[i]==1)
        {
            count+=1;
        }
        if(l[i]==1 && r[i]==0)
        {
            count+=1;
        }
        if(l[i]==1 && r[i]==1)
        {
            count+=2;
        }
        if(l[i]==0 && r[i]==0)
        {
            count+=0;
        }
     }
     }
     else if(z>n/2 && o>n/2)
     {
        for(i=0;i<n;i++)
     {
       if(l[i]==0 && r[i]==1)
        {
            count+=1;
        }
        if(l[i]==1 && r[i]==0)
        {
            count+=1;
        }
        if(l[i]==1 && r[i]==1)
        {
            count+=0;
        }
        if(l[i]==0 && r[i]==0)
        {
            count+=2;
        }
     }
     }
     else if(z>n/2 && o<=n/2)
     {
        for(i=0;i<n;i++)
     {
       if(l[i]==0 && r[i]==1)
        {
            count+=2;
        }
        if(l[i]==1 && r[i]==0)
        {
            count+=0;
        }
        if(l[i]==1 && r[i]==1)
        {
            count+=1;
        }
        if(l[i]==0 && r[i]==0)
        {
            count+=1;
        }
     }
     }
     
     /* for(i=0;i<n;i++)
     {
        if(l[i]==0 && r[i]==1)
        {
            count1+=1;
        n
        if(l[i]==1 && r[i]==0)
        {
            count2+=1;
        }
        if(l[i]==1 && r[i]==1)
        {
            count3+=1;
        }
        if(l[i]==0 && r[i]==0)
        {
            count4+=1;
        }
         */
     
    cout << count << endl;
              
              
              
return 0;
}
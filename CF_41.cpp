#include<iostream>
using namespace std;

int main()
{
    int n,a;
    cin >> n>>a ; // n = 4 , a = 33
    int mina(a),maxa(a),mini(0),maxi(0);
    for(int i=1;i<n;i++)
    {
        cin >> a; // n = 44 //
        if(a>maxa)  // 44==44
        {
        maxa = a;     // a = 44  //   // a = 76
        maxi = i;     // i = 1;  //      i = 6
        }
        if(a<=mina){  // 44<33 //44<11    
          mina = a;  // a = 33 // a = 11  // a = 10
          mini = i;  // i = 0 // i = 2  // i = 1
        }
    }
    cout << maxi + (n-1-mini) -(mini<maxi?1:0)<<endl; 
    //  1 + (4-1-2) - 0 = 2
    //  6 + (7-1-1)-1 = 10
    /* int n,i,j,count=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    for(i=0;i<n;i++)
    {
        
      if(a[i]>max)
      {
        max = a[i];
      }
    }
    int min = a[0];
    for(j=n-1;j>0;j--
    )
    {
       if(a[j]<min)
      {
        min = a[j];
      }
    }
    for(i=0;i<n;i++)
    {
         for(j=n-1;j>=0;j--)
      if(a[0]==max || a[n-1]==min)
      {
        break;
      }
      else if(a[0]==max && a[i+1]<a[i+2])
      {
       int temp = a[i+2];
        a[i+2] = a[i+1];
        a[i+1] = temp ;

        count++;
      }
      else if(a[n]==min && a[n-1]>a[n-2])
      {
        int temp = a[n-1];
        a[n-1] = a[n-2];
        a[n-2] = temp ;

        count++;
      }
       else if(a[n]==min && a[i+1]<a[i+2])
      {
       int temp = a[i+2];
        a[i+2] = a[i+1];
        a[i+1] = temp ;

        count++;
      }
      else if(a[0]==max && a[n-1]>a[n-2])
      {
        int temp = a[n-1];
        a[n-1] = a[n-2];
        a[n-2] = temp ;

        count++;
      }

    }
    cout <<endl;
cout << count << endl; */
    return 0;
}
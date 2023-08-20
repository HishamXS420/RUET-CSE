#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int s1,s2,s3,s4,i,count=0;
    cin >> s1 >> s2 >> s3 >> s4;

       for(i=0;i<1;i++)
       {
        if(s1==s2 && s1==s3 && s1==s4 && s2==s3 && s2==s4 && s3==s4)
        {
            count=3;
           continue;
        }
        if((s1==s2 && s1==s3 && s2==s3) || (s1==s2 && s1==s4 && s2==s4) || (s1==s3 && s3==s4 && s1==s4) || (s2==s3 && s3==s4 && s2==s4))
        {
          count=2;
            continue; 
        }
      if(s1==s2)
      {
        count++;
      }
      if(s1==s3)
      {
        count++;
      }
      if(s1==s4)
      {
        count++;
      }
      if(s2==s3)
      {
        count++;
      }
      if(s2==s4)
      {
        count++;
      }
      if(s3==s4)
      {
        count++;
      }
       }

    
    cout << count << endl;
    return 0;
}
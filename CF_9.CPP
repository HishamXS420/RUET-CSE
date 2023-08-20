#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int temp,i,n,arr[100];
    string s; // Declare a string variable to store user input
   cin >> s;
   int count = 0;
    for(int i=0;i<s.size() ;i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
        else
        {
          arr[count++] = s[i]-'0'; 
        }
    }
    sort(arr,arr+count);// Sort the extracted digits in ascending order using the sort function
    // Iterate over the sorted array and print the digits separated by a plus sign

    for(int i=0;i<count;i++)
    {
        cout << arr[i];
        if(i==count-1){
             break;// If it's the last digit, break the loop
        }
                // Summands = something that is added or summed
                // s[i]-'0'; means converting character 5 into integer 5.
                cout << "+";
                 }
    return 0;
}
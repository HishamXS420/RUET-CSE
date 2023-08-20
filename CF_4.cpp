#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int countd = 0;
    for (int i = 0; i < n; i++) // Corrected the loop condition
    {
        if (a[i] >= a[k-1] && a[i]!=0)
        {
            countd++;
        }
    }

    cout << countd << endl;
    return 0;
}
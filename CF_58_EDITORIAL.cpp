#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t = 1;
    cin >> t;
    while (t--) {
    int n, k;
    cin >> n >> k;
    
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    int cnt = 1, ans = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] - a[i - 1] > k) {
            cnt = 1;
        } else {
            ++cnt;
        }
        ans = max(ans, cnt);
    }
    
    cout << n - ans << endl;
    }
    return 0;
}

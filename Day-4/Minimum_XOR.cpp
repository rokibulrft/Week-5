#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, xo = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            xo ^= a[i];
        }
        int ans = xo;
        for (int i = 0; i < n; i++)
        {
            int curXor = (xo ^ a[i]);
            ans = min(ans, curXor);
        }
        cout << ans << "\n";
    }
}
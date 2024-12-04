#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum1 += floor((1.0 * a[i]) / k);
            if (a[i] % k != 0)
                sum2++;
        }
        if (sum1 > 0 || sum1 < -sum2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
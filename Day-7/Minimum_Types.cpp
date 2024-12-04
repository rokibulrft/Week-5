#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        vector<long long int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            a[i] = a[i] * b[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int count = 0;
        while (count < n && x > 0)
        {
            x -= a[count];
            count++;
        }
        if (x <= 0)
        {
            cout << count << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
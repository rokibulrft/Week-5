#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, sum = 0;
        cin >> n >> m;
        vector<int> a(n + 1);
        if (n > m)
        {
            cout << "NO\n";
        }
        else
        {
            if (n % 2 == 0 && m % 2 == 0)
            {
                cout << "YES\n";
                for (int i = 1; i <= n - 2; i++)
                {
                    a[i] = 1;
                    sum++;
                }
                a[n - 1] = (m - sum) / 2;
                a[n] = a[n - 1];
                for (int i = 1; i <= n; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
            else if (n % 2 == 1 && m % 2 == 0)
            {
                cout << "YES\n";
                for (int i = 1; i <= n - 1; i++)
                {
                    a[i] = 1;
                    sum++;
                }
                a[n] = m - sum;
                for (int i = 1; i <= n; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
            else if (n % 2 == 1 && m % 2 == 1)
            {
                cout << "YES\n";
                for (int i = 1; i <= n - 1; i++)
                {
                    a[i] = 1;
                    sum++;
                }
                a[n] = m - sum;
                for (int i = 1; i <= n; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "NO\n";
                continue;
            }
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        a[0] = 1;
        a[1] = b[0] - 1;
        for (int i = 2; i < n; i++)
        {
            a[i] = b[i - 1] - a[i - 1];
        }
        for (int x : a)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
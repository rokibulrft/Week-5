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
        vector<int> v(n + 1);
        for (int i = 1; i < n - k; i++)
        {
            v[i] = n - i + 1;
        }
        for (int i = n - k, j = 1; i <= n; i++, j++)
        {
            v[i] = j;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
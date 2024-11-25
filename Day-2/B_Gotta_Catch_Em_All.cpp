#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cost = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] * x <= y)
            {
                cost += v[i] * x;
            }
            else
            {
                cost += y;
            }
        }
        cout << cost << "\n";
    }
}
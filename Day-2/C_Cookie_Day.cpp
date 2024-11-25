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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                s.insert(a[i] % k);
            }
        }
        if (!s.empty())
            cout << *s.begin() << endl;
        else
            cout << -1 << endl;
    }
}
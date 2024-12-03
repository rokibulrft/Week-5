#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    // Case 1: Repeat "()"
    string t1 = string(n, '(') + string(n, ')');

    // Case 2: Alternate "()"
    string t2;
    for (int i = 0; i < n; i++)
    {
        t2 += "()";
    }

    // Check if `s` is a substring of `t1` or `t2`
    if (t1.find(s) == string::npos)
    {
        cout << "YES\n"
             << t1 << '\n';
    }
    else if (t2.find(s) == string::npos)
    {
        cout << "YES\n"
             << t2 << '\n';
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

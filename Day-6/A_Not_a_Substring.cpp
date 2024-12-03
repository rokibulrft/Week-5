#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    if (n == 2 && s == "()")
    {
        cout << "NO\n";
        return;
    }

    string t1(n, '(');
    t1 += string(n, ')');

    if (t1.find(s) != string::npos)
    {

        string t2;
        for (int i = 0; i < n; i++)
        {
            t2 += "()";
        }
        cout << "YES\n"
             << t2 << '\n';
    }
    else
    {
        cout << "YES\n"
             << t1 << '\n';
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

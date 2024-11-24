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
        if (n % 2 == 0)
        {
            cout << "YES\n";
            string s;
            for (int i = 0; i < n / 2; i++)
            {
                if (i % 2 == 0)
                {
                    s.push_back('A');
                    s.push_back('A');
                }
                else
                {
                    s.push_back('B');
                    s.push_back('B');
                }
            }
            cout << s << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}
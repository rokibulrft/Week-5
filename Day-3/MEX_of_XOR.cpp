#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        set<int> s;
        for (int i = l; i <= r; i++)
        {
            s.insert(i ^ x);
        }

        int mex = 0;
        while (s.find(mex) != s.end())
        {
            mex++;
        }
        cout << mex << endl;
    }
}

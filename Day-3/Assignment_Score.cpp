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
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        int total_marks = (n + 1) * 50;
        int needed = total_marks - sum;
        if (sum > total_marks)
        {
            cout << 0 << endl;
        }
        else if (needed > 100)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << needed << endl;
        }
    }
}
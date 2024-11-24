#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> mp;
        for (char i = 'a'; i <= 'z'; i++)
        {
            mp[i] = 0;
        }
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            for (auto it : mp)
            {
                if (it.second == v[i])
                {
                    cout << it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (y * z <= x)
    {
        cout << x - (y * z);
    }
    else
    {
        cout << -1;
    }
}
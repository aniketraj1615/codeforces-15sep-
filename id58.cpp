#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int a, b, c, d, e;
    int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'h' && f2 == 0)
        {
            a = i;
            f2 = 1;
        }
        else if (s[i] == 'e' && f3 == 0)
        {
            b = i;
            f3 = 1;
        }
        else if (s[i] == 'l' && f1 == 0)
        {
            c = i;
            f1 = 1;
        }
        else if (s[i] == 'l' && f1 == 1)
        {
            d = i;
        }
        else if (s[i] == 'o' && f4 == 0)
        {
            e = i;
            f4 = 1;
        }
    }

    if (a < b && b < c && c < d && d < e)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
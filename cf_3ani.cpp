#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0" << endl;
        }
        else if (abs(a - b) >= x)
        {
            cout << "1" << endl;
        }
        else if ((abs(l - a) >= x) && (abs(r - a) < x))
        {
            if (abs(l - b) >= x)
            {
                cout << "2" << endl;
            }
            else
            {
                if (abs(l - r) >= x)
                {
                    if (abs(r - b) >= x)
                    {
                        cout << "3" << endl;
                    }
                    else
                    {
                        cout << "-1" << endl;
                    }
                }
            }
        }

        else if (abs(r - a) >= x)
        {
            if (abs(r - b) >= x)
            {
                cout << "2" << endl;
            }
            else
            {
                if (abs(r - l) >= x)
                {
                    if (abs(l - b) >= x)
                    {
                        cout << "3" << endl;
                    }
                    else
                    {
                        cout << "-1" << endl;
                    }
                }
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
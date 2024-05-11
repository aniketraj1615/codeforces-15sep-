#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vii a(m);
        int row[m + 1] = {0};
        int col[m + 1] = {0};
        for (int i = 0; i < m; i++)
        {
            cin >> a[i].ff >> a[i].ss;
            row[a[i].ff]++;
            col[a[i].ss]++;
        }
        int f1 = 0;
        int f2 = 0;
        for (int i = 1; i <= m; i++)
        {
            if (row[i] == 0)
            {
                f1 = 1;
                break;
            }
            else if (col[i] == 0)
            {
                f2 = 1;
                break;
            }
        }
        if (f1 == 0 && f2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        // cout << s << endl;
        int a = 0, b = 0;
        int chk = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {

                a++;
            }
            else if (s[i] == 'L')
            {

                a--;
            }
            else if (s[i] == 'U')
            {

                b++;
            }
            else if (s[i] == 'D')
            {

                b--;
            }
            if (a == 1 && b == 1)
            {
                cout << "YES" << endl;
                chk = 1;
                break;
            }
        }
        if (chk == 0)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
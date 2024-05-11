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
        string s;
        cin >> n;
        cin >> s;
        int al = 0;
        int ar = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                al++;
            }
            else
            {
                ar++;
            }
        }
        if (ar == n || al == n)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 0, j = 0; i < n - 1 && j < n; i++, j++)
            {
                if (s[i + 1] == 'L' && s[j] == 'R')
                {
                }

                {
                }
            }
        }
    }

    return 0;
}
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
        string s = "codeforces";
        char ch;
        cin >> ch;
        int a = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ch)
            {
                a = 1;
                cout << "YES" << endl;
                break;
            }
        }
        if (a == 0)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
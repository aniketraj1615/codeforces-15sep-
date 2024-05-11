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
        int long long k;
        cin >> k;

        if (((k - 1) * (k - 1) - 1) % k == 0)
        {
            cout << k - 1 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
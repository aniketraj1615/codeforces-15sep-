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
        int inc = 0;
        int dec = 0;
        int arr[n];
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            // mx = max(mx, arr[i]);
        }
        int ind = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= mx)
            {
                mx = arr[i];
                // cout << "if" << endl;
                ind = i;
                // cout << ind << endl;
            }
        }
        // cout << "aniket" << endl;
        cout << "ind" << ind << endl;
        if (ind == 0 || ind == (n - 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
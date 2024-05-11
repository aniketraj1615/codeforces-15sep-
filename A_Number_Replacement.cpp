#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int a[51] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string s;
        cin >> s;
        int f = 0;
        for (int i = 0; i < n; i++)
        {

            if (a[arr[i]] == 0 || a[arr[i]] == s[i])
            {
                a[arr[i]] = s[i];
            }
            else
            {
                f = 1;
                break;
            }
        }

                if (f == 0)
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
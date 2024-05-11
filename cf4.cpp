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
        int index = 0;
        int a[1001] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            a[arr[i]] = i + 1;
        }
        int ans = 0;
        int mx = 0;
        int f = 0;
        int logic = 0;
        for (int i = 1000; i >= 1 && logic == 0; i--)
        {
            for (int j = i; j >= 1 && logic == 0; j--)
            {
                if (__gcd(i, j) == 1 && a[i] && a[j])

                {

                    f = 1;
                    ans = a[i] + a[j];
                    mx = max(mx, ans);
                }
            }
        }
        if (f == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << mx << endl;
        }
    }
    return 0;
}
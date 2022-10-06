#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int brr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    int mx = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (brr[i] % arr[j] == 0)
            {
                mx = max(mx, brr[i] / arr[j]);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (brr[i] % arr[j] == 0 && mx == brr[i] / arr[j])
            {

                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
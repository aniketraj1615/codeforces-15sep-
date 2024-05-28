#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxx = arr[0];
        for (int i = 1; i < n; i++)
        {
            maxx = max(maxx, (arr[i] - arr[i - 1]));
        }

        int ans2 = 2 * (x - arr[n - 1]);

        cout << max(maxx, ans2) << endl;
    }

    return 0;
}
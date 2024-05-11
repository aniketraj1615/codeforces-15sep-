#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        cout << "Case #" << i << ": ";
        i++;
        int m, n, p;
        cin >> m >> n >> p;
        int arr[m][n];
        int max_arr[n] = {0};
        int mx;
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            mx = 0;
            for (int j = 0; j < m; j++)
            {
                mx = max(mx, arr[j][i]);
            }
            max_arr[i] = mx;
        }

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += max_arr[i] - arr[p - 1][i];
        }
        cout << sum << endl;
    }
    return 0;
}
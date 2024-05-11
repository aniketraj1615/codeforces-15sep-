#include <bits/stdc++.h>

using namespace std;
int findS(int s)
{
    int sum = 0;

    for (int n = 1; sum < s; n++)
    {
        sum += n;

        if (sum == s)
            return n;
    }

    return -1;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int flag = 0;
        int m, s;
        cin >> m >> s;

        int arr[m];
        int mx = 0;
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
            sum += arr[i];
        }
        sum += s;
        if (findS(sum) < mx || findS(sum) == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
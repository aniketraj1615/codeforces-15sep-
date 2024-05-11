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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 0)
            {
            }
        }
        cout << ans << endl;
    }

    return 0;
}
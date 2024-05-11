#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int flage = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] != 0)
            {
                flage = 1;
            }
        }
        if (flage == 0)
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
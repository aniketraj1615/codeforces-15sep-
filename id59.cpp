#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int copy = n;
    int size = n;
    int arr[m];
    int brr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }

    sort(arr, arr + m);
    sort(brr, brr + m);
    int mx = 0;
    int minn = 0;

    while (n--)
    {
        mx += arr[m - 1];
        arr[m - 1] = arr[m - 1] - 1;
        sort(arr, arr + m);
    }
    n = copy;

    while (copy--)
    {
        if (brr[0] > 0)
        {
            minn += brr[0];
            brr[0] = brr[0] - 1;
            sort(brr, brr + m);
        }
        else
        {
            brr[0] = 1001;
            sort(brr, brr + m);
            minn += brr[0];
            brr[0] = brr[0] - 1;
            sort(brr, brr + m);
        }
    }

    cout << mx << " " << minn << endl;
    return 0;
}
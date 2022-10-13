#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);

    int minn = arr[m-1];
    for (int i = 0; i < m - n + 1; i++)
    {
        int diff = arr[n + i - 1] - arr[i];
        minn = min(minn, diff);
    }
    cout << minn << endl;

    return 0;
}
#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
using namespace std;

int *max_element(int a[], int n)
{
    static int ans[200000];
    int pre[n];

    pre[0] = a[0];
    for (int long long i = 1; i < n; i++)
        pre[i] = max(pre[i - 1], a[i]);

    int suf[n];

    suf[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suf[i] = max(suf[i + 1], a[i]);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            ans[i] = suf[i + 1];

        else if (i == n - 1)
            ans[i] = pre[i - 1];

        else
            ans[i] = max(pre[i - 1], suf[i + 1]);
    }
    return ans;
}
int main()
{
    int long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int *ab = max_element(arr, n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] - ab[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
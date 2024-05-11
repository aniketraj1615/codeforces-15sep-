#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, m;
    cin >> n;
    ll arr[n];
    ll h[n + 1] = {0};

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        h[arr[i]] = i + 1;
    }
    // cout << "hrr  :" << endl;
    // for (int i = 0; i < n + 1; i++)
    // {
    //     cout << h[i] << " ";
    // }
    // cout << endl;
    cin >> m;
    ll left = 0;
    ll right = 0;
    int mrr[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> mrr[i];
        left += h[mrr[i]];
        right += (n - h[mrr[i]] + 1);
    }

    cout << left << " " << right << endl;
    return 0;
}
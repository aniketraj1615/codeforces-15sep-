#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    cin >> arr[0];
    ll mx = arr[0];
    ll minn = arr[0];
    for (ll i = 1; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        minn = min(minn, arr[i]);
    }
    // cout << mx << minn << endl;
    ll sum = mx - minn;
    if (sum == 0)
    {
        cout << "0"
             << " " << ((n * (n - 1)) / 2);
    }
    // cout << sum;
    else
    {
        ll ani = 0;
        ll ket = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] == mx)
            {
                ani++;
            }
            else if (arr[i] == minn)
            {
                ket++;
            }
        }

        cout << sum << " " << (ani * ket);
    }
    return 0;
}
#include <bits/stdc++.h>
// #define pii pair<int,int>
#define ff first
#define ss second
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll arr[n];
        ll odd = 0;
        ll even = 0;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        pair<ll, ll> p[q];
        for (ll i = 0; i < q; i++)
        {

            cin >> p[i].ff;
            cin >> p[i].ss;
        }
        for (ll i = 0; i < q; i++)
        {
            if (p[i].ff == 0 && p[i].ss % 2 == 0)
            {
                sum += (even * p[i].ss);
            }
            else if (p[i].ff == 0 && p[i].ss % 2 != 0)
            {
                odd = odd + even;
                sum += (even * p[i].ss);
                even = 0;
            }
            else if (p[i].ff == 1 && p[i].ss % 2 != 0)
            {

                sum += (odd * p[i].ss);
                even = even + odd;
                odd = 0;
            }
            else if (p[i].ff == 1 && p[i].ss % 2 == 0)
            {

                sum += (odd * p[i].ss);
            }
            cout << sum << endl;
        }
        }
    return 0;
}
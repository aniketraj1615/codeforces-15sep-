#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, q;
		cin >> n >> q;
		ll arr[n];
		ll max_arr[n];
		ll sum_arr[n];
		ll qrr[q];
		ll mx = 0;
		// ll minn = 0;
		ll total = 0;
		for (ll i = 0; i < n; i++)
		{
			cin >> arr[i];
			total += arr[i];
			mx = max(mx, arr[i]);
			max_arr[i] = mx;
			sum_arr[i] = total;
		}

		for (ll j = 0; j < q; j++)
		{
			cin >> qrr[j];
		}

		for (ll j = 0; j < q; j++)
		{
			ll ind = -1;
			if (qrr[j] >= max_arr[0])
			{
				ind = (upper_bound(max_arr, max_arr + n, qrr[j]) - max_arr);
			}

			if (ind == -1)
			{
				cout << "0"
					 << " ";
			}
			else
			{
				cout << sum_arr[ind - 1] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
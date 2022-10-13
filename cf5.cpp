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
		ll qrr[q];
		ll mx = 0;
		ll minn = 0;
		ll total = 0;
		for (ll i = 0; i < n; i++)
		{
			cin >> arr[i];
			mx = max(mx, arr[i]);
			minn = min(minn, arr[i]);
			total += arr[i];
		}
		// cout<<"max :"<<mx<<endl;
		// cout<<"total :"<<total<<endl;
		for (ll j = 0; j < q; j++)
		{
			cin >> qrr[j];
		}
		ll ans;
		for (ll i = 0; i < q; i++)
		{
			// cout<<"element :"<<qrr[i]<<endl;
			ans = 0;
			if (qrr[i] >= mx)
			{
				cout << total << " ";
				continue;
			}

			else
			{
				for (ll j = 0; j < n; j++)
				{
					if (qrr[i] >= arr[j])
					{
						ans += arr[j];
					}
					else
					{
						cout << ans << " ";
						break;
					}
				}
			}
		}
		cout << endl;
		// cout<<"over "<<endl;
	}
	return 0;
}
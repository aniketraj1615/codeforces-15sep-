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
        int arr[n];
        int z = 0;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                one++;
            }
            else
            {
                z++;
            }
        }
        int sum = 0;

        if (one == n || z == n)
        {
            if (arr[0] == 0)
            {
                cout << "0" << endl;
            }
            else
            {
                if (n % 2 == 0)
                {
                    cout << "0" << endl;
                }
                else
                {
                    cout << "1" << endl;
                }
            }
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                int ans = arr[i];
                int j = i + 1;
                while (j < n)
                {
                    ans = ans ^ arr[j];
                    if (ans == 1)
                    {
                        sum++;

                        j++;
                        ans = arr[j];
                        break;
                    }
                    j++;
                }
                i = j - 1;
            }
            cout << sum << endl;
        }
    }
    return 0;
}
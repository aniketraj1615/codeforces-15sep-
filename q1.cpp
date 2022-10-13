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
        int a1 = 0;
        int a0 = 0;
        int b1 = 0, b0 = 0;

        int arr[n] = {0};
        int brr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                a1++;
            }
            else
            {
                a0++;
            }
        }
        for (int j = 0; j < n; j++)
        {
            cin >> brr[j];
            if (brr[j] == 1)
            {
                b1++;
            }
            else
            {
                b0++;
            }
        }
        int ans = 0;
        int flage = 0;
        for (int p = 0; p < n; p++)
        {
            if (arr[p] != brr[p])
            {
                flage = 1;
                break;
            }
        }
        if (flage == 0)
        {

            cout << "0" << endl;
        }

        else if (n == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            int c1 = a1 - b1;
            int c0 = a0 - b0;
            if (c1 < 0)
            {

                a1 = 0;
                ans = c0 + 1;
            }
            else if (c1 == 0)
            {

                ans = 1;
            }
            else if (c1 > 0)
            {

                ans = c1;
            }

            cout << ans << endl;
        }
    }
    return 0;
}
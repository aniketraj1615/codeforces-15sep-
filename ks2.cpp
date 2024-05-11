#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
int main()
{
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        cout << "Case #" << i << ": ";
        i++;
        int s, h;
        cin >> s >> h;
        int n;
        cin >> n;
        vii a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].ff >> a[i].ss;
        }
        int m;
        cin >> m;
        vii b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i].ff >> b[i].ss;
        }
        int red = 0;
        int yellow = 0;
        double arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            int k = a[i].ff;
            int l = a[i].ss;
            double r = (double)sqrt((k * k + l * l));

            // cout << "radius of r:" << r << endl;
            if (r - s <= h)
            {
                arr[i] = r;
                red++;
                // cout << "red :" << r << endl;
            }
            // int f = 0;
            // if ((abs(a[i].ff) <= h && abs(a[i].ss) <= h || abs(a[i].ff) <= h && abs(a[i].ss) + s <= h || abs(a[i].ff) <= h && abs(a[i].ss) - s <= h) && f == 0)
            // {
            //     f = 1;
            //     red++;
            // }

            // else if ((abs(a[i].ff) + s <= h && abs(a[i].ss) <= h || abs(a[i].ff) + s <= h && abs(a[i].ss) + s <= h || abs(a[i].ff) + s <= h && abs(a[i].ss) - s <= h) && f == 0)
            // {
            //     f = 1;
            //     red++;
            // }
            // else if ((abs(a[i].ff) - s <= h && abs(a[i].ss) <= h || abs(a[i].ff) - s <= h && abs(a[i].ss) + s <= h || abs(a[i].ff) - s <= h && abs(a[i].ss) - s <= h) && f == 0)
            // {
            //     f = 1;
            //     red++;
            // }
        }
        sort(arr, arr + n);
        double brr[m] = {0};

        for (int i = 0; i < m; i++)
        {
            int k = b[i].ff;
            int l = b[i].ss;
            double r = (double)sqrt((k * k + l * l));

            // cout << "radius of y:" << r << endl;
            if (r - s <= h)
            {
                brr[i] = r;
                yellow++;
                // cout << "yellow :" << yellow << endl;
            }
            // int f = 0;
            // if (abs(b[i].ff) <= h && abs(b[i].ss) <= h)
            // {
            //     f = 1;
            //     yellow++;
            // }

            // else if (abs(b[i].ff) + s <= h && abs(b[i].ss) <= h && f == 0)
            // {
            //     f = 1;
            //     yellow++;
            // }
            // else if (abs(b[i].ff) - s <= h && abs(b[i].ss) <= h && f == 0)
            // {
            //     f = 1;
            //     yellow++;
            // }
        }
        sort(brr, brr + m);
        int r = 0, y = 0;
        if (red == yellow)
        {
            for (int i = 0; i < red; i++)
            {
                if (arr[i] < brr[i])
                {
                    r++;
                }
                else
                {
                    y++;
                }
            }
            if (r > y)
            {
                r -= y;
                y = 0;
            }
            else
            {
                y -= r;
                r = 0;
            }
            // cout << "ans  :" << endl;
            cout << r << " " << y << endl;
        }

        // cout << "red :" << red << "-- "
        //  << "yellow :" << yellow << endl;

        else
        {
            if (red > yellow)
            {
                red -= yellow;
                yellow = 0;
            }
            else
            {
                yellow -= red;
                red = 0;
            }
            // cout << "ans  :" << endl;
            cout << red << " " << yellow << endl;
        }
    }
    return 0;
}
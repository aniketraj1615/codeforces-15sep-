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
        if (n % 2 != 0)
        {
            int a = n / 2;
            int i = 1;
            cout << (n / 2) + 1 << " ";
            while (a--)
            {
                cout << n << " " << i << " ";
                i++;
                n--;
            }
        }
        else
        {
            int a = n / 2;
            int i = 1;
            while (a--)
            {
                cout << n << " " << i << " ";
                n--;
                i++;
            }
        }

        cout << endl;
    }
    return 0;
}
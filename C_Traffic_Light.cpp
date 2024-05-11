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
        char c;
        cin >> c;
        string s;
        cin >> s;
        if (c == 'g')
        {
            cout << "0" << endl;
        }
        else
        {
            int mx = 0;
            int count;
            for (int i = 0; i < n; i++)
            {
                count = 1;
                if (s[i] == c)
                {
                    int j = i + 1;
                    while (s[j % n] != 'g')
                    {
                        count++;
                        j++;
                    }
                    i = j;
                }
                mx = max(mx, count);
            }

            cout << mx << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        int n = s.length();
        if (n > 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == 'Y')

                {
                    // cout << "inside Y  :" << endl;
                    if (s[i + 1] == 'e')
                    {
                        // cout << "aniket" << endl;
                        continue;
                    }
                    else
                    {
                        flag = 1;
                        cout << "NO" << endl;
                        break;
                    }
                }
                else if (s[i] == 'e')
                {
                    // cout << "inside e  :" << endl;
                    if (s[i + 1] == 's')
                    {
                        continue;
                    }
                    else
                    {
                        flag = 1;
                        cout << "NO" << endl;
                        break;
                    }
                }
                else if (s[i] == 's')
                {
                    // cout << "inside s  :" << endl;
                    if (s[i + 1] == 'Y')
                    {
                        continue;
                    }
                    else
                    {
                        flag = 1;
                        cout << "NO" << endl;
                        break;
                    }
                }
                else
                {
                    flag = 1;
                    cout << "NO" << endl;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            if (s[0] == 'Y' || s[0] == 'e' || s[0] == 's')
            {
                cout << "YES" << endl;
            }
            else
            {
                flag = 1;
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
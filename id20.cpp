#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int n = s.length();
    for (int i = 0; i < n - 1; i = i + 2)
    {

        for (int j = 0; j < n - i - 1; j = j + 2)
        {
            if (s[j] > s[j + 2])
            {
                int t = s[j];
                s[j] = s[j + 2];
                s[j + 2] = t;
            }
        }
    }

    cout << s << endl;
    return 0;
}
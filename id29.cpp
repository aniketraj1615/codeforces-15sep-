#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        string s;
        cin >> s;

        if (s[1] == '+')
        {

            sum = sum + 1;
        }
        else
        {

            sum = sum - 1;
        }
    }
    cout << sum << endl;
    return 0;
}
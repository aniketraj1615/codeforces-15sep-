#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
using namespace std;
int main()
{
    string s = "ANiket@:kumar1@";
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)

        {

            s[i] = s[i] + 32;
        }
    }
    cout << s << endl;
    for (int i = 0, j = s.size() - 1; i < s.size() && j >= 0; i++, j--)
    {
        if (s[i] >= 97 && s[i] <= 122 || s[i] >= 48 && s[i] <= 57)
        {
            continue;
        }
    }

    return 0;
}
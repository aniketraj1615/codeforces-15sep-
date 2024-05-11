#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        string s1, s2;
        cin >> s1 >> s2;
        int a = s1.size();
        int b = s2.size();

        if (s1[a - 1] == s2[b - 1])
        {
            if (s1[a - 1] == 'S')
            {
                if (a > b)
                {
                    cout << "<" << endl;
                }
                else if (a < b)
                {
                    cout << "kii";
                    cout << ">" << endl;
                }
                else
                {
                    cout << "=" << endl;
                }
            }
            else if (s1[a - 1] == 'L')
            {
                if (a > b)
                {
                    cout << ">" << endl;
                }
                else if (a < b)
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << "=" << endl;
                }
            }
            else if (s1[a - 1] == 'M')
            {
                if (a > b)
                {
                    cout << "<" << endl;
                }
                else if (a < b)
                {
                    cout << "kii";
                    cout << ">" << endl;
                }
                else
                {
                    cout << "=" << endl;
                }
            }
        }
        else if (s1[a - 1] == 'S' && (s2[b - 1] == 'M' || s2[b - 1] == 'L'))
        {
            cout << "<" << endl;
        }
        else if (s1[a - 1] == 'L' && (s2[b - 1] == 'M'))
        {
            cout << ">" << endl;
        }
    }
    return 0;
}

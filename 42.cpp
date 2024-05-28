#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(10, -1);
    int digit = log10(n) + 1;

    for (int i = 9; i >= 1 && n; i--)
    {
        arr[i] = n % 10;
        n = n / 10;
    }

    bool flage = false;

    int four = 1;

    if (arr[10 - digit] != 1)
    {
        flage = true;
    }
    else
    {

        for (int i = 1; i < 10; i++)
        {

            if (arr[i] != 1 && arr[i] != 4 && arr[i] != -1)
            {
                flage = true;

                break;
            }

            if (arr[i] == 4 && arr[i + 1] == 4)
            {
                four++;
                if (four > 2)
                {
                    flage = true;

                    break;
                }
            }
            else
            {
                four = 1;
            }
        }
    }

    if (flage == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}
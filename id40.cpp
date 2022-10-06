#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long int k = 0, z = 0, f = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] == 5 ? f++ : z++;
    }
    k = f;

    f = (f / 9) * 9;

    if (z == 0)
    {

        cout << "-1";
    }
    else if (f == 0 && z != 0)
    {

        cout << "0";
    }
    else if (f)
    {
        long long p = f;

        while (f--)
        {

            cout << "5";
        }
         while (z--)
            {

                cout << "0";
            }
        // if (p == k)
        // {
        //     z = z - 1;
           
        //     while (z--)
        //     {

        //         cout << "0";
        //     }
        // }
        // else
        // {

        //     while (z--)
        //     {

        //         cout << "0";
        //     }
        // }
    }
    else if (f == 0)
    {

        cout << "0";
    }
    
    return 0;
}
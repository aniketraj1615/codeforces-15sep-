#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int ans = 0;
        int n;
        cin >> n;
        int arr[n];
        int brr[n];
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            brr[i] = arr[i];
        }
        sort(brr, brr + n);
        if (n == 1)
        {
            cout << "0" << endl;
        }

        else
        {
            for (int i = 0; i < n - 2; i=i+2)
            {
                if (arr[i] > arr[i + 2])
                {
                    int t = arr[i];
                    arr[i] = arr[i + 2];
                    arr[i + 2] = t;
                    ans++;
                }
            }
            for (int i = 1; i < n - 2; i=i+2)
            {
                if (arr[i] > arr[i + 2])
                {
                    int t = arr[i];
                    arr[i] = arr[i + 2];
                    arr[i + 2] = t;
                    ans++;
                }
            }
             
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != brr[i])
                {
                    cout << "-1" << endl;
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                cout << ans << endl;
            }
        }
      
    
}
return 0;
}
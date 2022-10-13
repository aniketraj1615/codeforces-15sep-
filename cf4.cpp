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
        int arr[n];
        int index=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]==1){
                index=i;
            }
        }
        int ans = 0;
        int mx = 0;
        int f = 0;
        int logic=0;
        for (int i = n - 1; i >= 0&&logic==0; i--)
        {
            for (int j = i; j >= 0&&logic==0; j--)
            {
                if (__gcd(arr[i], arr[j]) == 1)

                {

                    f = 1;
                    ans = i + j + 2;
                    mx = max(mx, ans);
                    if(mx<=((2*index)+2)){
                        logic=1;
                        break;
                    }
                }
            }
        }
        if (f == 0)
        {
            cout << "-1" << endl;
        }
        else if(logic==1){
            cout<<((2*index)+2)<<endl;
        }
        else
        {
            cout << mx << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, y;
        cin >> n >> y;
        int arr[n];
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            a = a | arr[i];
        }
        if (a == 0)
        {
            cout << y << endl;
        }

        else if (a == y)
        {
            cout << "0" << endl;
        }
        else if (y == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            int k = a;
            int p = y;
            vector<int> v;
            while (a)
            {
                if (a & 1)
                    v.push_back(1);
                else
                    v.push_back(0);

                a >>= 1;
            }
            reverse(v.begin(), v.end());
            // cout << "or of arrat :";
            // for (int i = 0; i < v.size(); i++)
            // {
            //     cout << v[i] << " ";
            // }
            // cout << endl;
            vector<int> ans;
            while (p)
            {
                if (p & 1)
                    ans.push_back(1);
                else
                    ans.push_back(0);

                p >>= 1;
            }
            reverse(ans.begin(), ans.end());
            // cout << "change to :";
            // for (int i = 0; i < ans.size(); i++)
            // {
            //     cout << ans[i] << " ";
            // }
            // cout << endl;
            int kk = v.size();
            int l = ans.size();
            int i = 0, j = 0;
            vector<int> res;
            int flag = 0;
            while (i < kk && j < l)
            {
                if (v[i] == 1 && ans[j] == 0)
                {
                    flag = 1;
                    cout << "-1" << endl;
                    break;
                }
                else if (v[i] == ans[j])
                {
                    res.push_back(0);
                }
                else if (v[i] == 0 && ans[j] == 1)
                {
                    res.push_back(1);
                }
                i++;
                j++;
            }
            if (flag == 0)
            {
                while (j < l)
                {
                    res.push_back(1);
                    j++;
                }
                reverse(res.begin(), res.end());
                // cout << "bin result :";
                // for (int i = 0; i < res.size(); i++)
                // {
                //     cout << res[i] << " ";
                // }
                // cout << endl;
                int ani = res.size();
                int out = 0;
                int ku = 0;
                for (int i = ani - 1; i >= 0; i--)
                {
                    out += res[i] * pow(2, ku++);
                }

                cout << out << endl;
            }
        }
    }
    return 0;
}

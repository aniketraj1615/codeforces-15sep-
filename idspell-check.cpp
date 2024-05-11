#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    while (n--)
    {
        int m;
        string s;
        cin >> s;
        if (m != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                if (s[i] == 'T')
                {
                    a = 1;
                }
                else if (s[i] == 'i')
                {
                    b = 1;
                }
                else if (s[i] == 'm')
                {
                    c = 1;
                }
                else if (s[i] == 'r')
                {
                    d = 1;
                }
                else if (s[i] == 'u')
                {
                    e = 1;
                }
            }
            if(a==b==c==d==e==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
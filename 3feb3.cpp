#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string vect;
        cin >> vect;
        int i = 0;
        int j = n - 1;
        // cout << i << " " << j << endl;
        while (i < j && vect[i] != vect[j])
        {
            i++;
            j--;
        }
        // cout << "i:" << i << endl;
        // cout << "j:" << j << endl;
        cout << ((j - i) + 1) << endl;
    }
    return 0;
}
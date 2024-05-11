#include <bits/stdc++.h>
using namespace std;
int ans = 0;
void fun(int ind, int arr[], int n, vector<int> &vect, int sum, int s)
{
    if (ind == n)
    {
        if (sum == s)
        {
            ans++;
        }
        cout << ans << endl;
        return;
    }
    vect.push_back(arr[ind]);
    s += arr[ind];
    fun(ind + 1, arr, n, vect, sum, s);
    vect.pop_back();
    s -= arr[ind];
    fun(ind + 1, arr, n, vect, sum, s);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mx = 0;
    int minn = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        minn = min(minn, arr[i]);
    }
    int sum = mx - minn;
    vector<int> vect;
    fun(0, arr, n, vect, sum, 0);

    return 0;
}
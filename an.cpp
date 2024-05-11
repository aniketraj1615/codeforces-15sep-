// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to find maximum element
// among (N - 1) elements other than
// a[i] for each i from 1 to N
int *max_element(int a[], int n)
{
    // To store prefix max element
    static int ans[100000];
    int pre[n];

    pre[0] = a[0];
    for (int i = 1; i < n; i++)
        pre[i] = max(pre[i - 1], a[i]);

    // To store suffix max element
    int suf[n];

    suf[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suf[i] = max(suf[i + 1], a[i]);

    // Find the maximum element
    // in the array other than a[i]
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            ans[i] = suf[i + 1];

        else if (i == n - 1)
            ans[i] = pre[i - 1];

        else
            ans[i] = max(pre[i - 1], suf[i + 1]);
    }
    return ans;
}

// Driver code
int main()
{
    int a[] = {2, 5, 6, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);

    int *ab = max_element(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << ab[i] << " ";
    }

    return 0;
}

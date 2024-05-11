#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
        return false;

    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int fun(int a)
{
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return i;
        }
        return 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (isPrime(a))
        {
            cout << "-1" << endl;
        }
        else if (fun(a))
        {
            cout << "1"
                 << " " << fun(a) << " " << a / fun(a) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}

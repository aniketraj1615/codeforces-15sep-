#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long int n)
{

    if (n <= 1)
        return false;

    for (long long int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    long long int n;
    cin >> n;
int long long s1=0;
    long long int ans = 0;
    long long int copy = n;
    while (copy && n)
    {
        
        if (isPrime(copy))
        {
            if(n-copy==1){
                copy--;
            }
           else{ n = n - copy;

            copy = n;
            ans++;}
        }
        else
        {
s1++;
            copy--;
        }
    }
   
    cout << ans  << endl;
    
}
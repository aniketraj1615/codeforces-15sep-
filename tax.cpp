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
if(isPrime(n)){
    cout<<"1"<<endl;
}
else{
    if(n%2==0){
        cout<<"2"<<endl;
    }
    else{
        if(isPrime(n-2)){
            cout<<"2"<<endl;
        }
        else{
            cout<<"3"<<endl;
        }
    }

}

    return 0;
}
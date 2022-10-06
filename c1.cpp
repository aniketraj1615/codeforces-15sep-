#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int bubbleSort(int arr[], int n)
{
    int ans=0;
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-2; j++)
     {
        if (arr[j] > arr[j+2])
        {
           swap(&arr[j], &arr[j+1]);
           ans++;
           swapped = true;
        }
     }
 
     
     if (swapped == false)
        break;
   }
   return ans;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        
        int n;
        cin >> n;
        int arr[n];
        int brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            brr[i] = arr[i];
        }
        if (n == 1)
        {
            cout << "0" << endl;
        }

        else
        {
            int a=bubbleSort( arr, n);
            cout<<"a  :"<<a<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            // cout<<"ans :"<<ans<<endl;
            sort(brr, brr + n);
            int f = 0;
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
                cout << a << endl;
            }
        }
    }
    return 0;
}
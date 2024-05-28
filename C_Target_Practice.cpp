#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[10][10];
        int z = 0, a = 0, c = 0, v = 0, b = 0;
        for (int i = 0; i < 10; i++)
        {

            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < 10; i++)
        {


            for (int j = 0; j < 10; j++)
            {

                if (arr[i][j] == 'X')

                {

                    if ((i == 0 || i == 9) || (j == 0 || j == 9))
                    {

                        z=z+1;

                    }
                    else if ((i == 1 || i == 8) || (j == 1 || j == 8))
                    {


                        a = a + 2;
                    }
                    else if ((i == 2 || i == 7) || (j == 2 || j == 7))
                    {


                        c = c + 3;
                    }
                    else if ((i == 3 || i == 6) || (j == 3 || j == 6))
                    {


                        v = v + 4;
                    }
                    else if ((i == 4 || i == 5) || (j == 4 || j == 5))
                    {


                        b = b + 5;
                    }
                }
            }
        }
        cout << (z + a + c + v + b) << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;

        int sum = (x[0] - '0')+(x[1] - '0')+(x[2] - '0');
        int sum2 = (x[3] - '0')+(x[4] - '0')+(x[5] - '0');

        //This different apporach

        // int sum = 0;
        // int sum2 = 0;

        // for (int i = 0; i < 3; i++)
        // {
        //     sum = sum + (x[i] - '0');
        // }
        // for (int i = 5; i >= 3; i--)
        // {
        //     sum2 = sum2 + (x[i] - '0');
        // }

        if (sum == sum2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}
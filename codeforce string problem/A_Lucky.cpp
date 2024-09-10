#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int arr[10];
        int sum = 0;
        int sum2 = 0;
        for (int i = 0; i < 6; i++)
        {
            int y = x % 10;
            x = x / 10;
            arr[i] = y;
        }
        // for (int i = 0; i < 6; i++)
        // {
        //     cout<<arr[i]<<" ";
        // }

        for (int i = 0; i < 3; i++)
        {
            sum += arr[i];
        }
        for (int i = 5; i >= 3; i--)
        {
            sum2 += arr[i];
        }

        if (sum == sum2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    cout<<endl;
    }

    return 0;
}
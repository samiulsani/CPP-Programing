#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        while (n != 0)
        {
            cout << c << " ";
            n--;
        }
        cout << endl;
    }

    return 0;
}
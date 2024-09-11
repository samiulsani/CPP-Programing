#include <bits/stdc++.h>
using namespace std;

int power(int x, int y)
{
    double result = 0;
    for (int i = 2; i <= y; i += 2)
    {
        result += pow(x, i);
        // if (x == 0)
        // {
        //     result += pow(x, i) - 1;
        // }
        // else
        // {
        //     result += pow(x, i);
        // }
    }
    return result;
}

int main()
{
    int x, n;
    cin >> x >> n;

    cout << power(x, n) << endl;

    return 0;
}
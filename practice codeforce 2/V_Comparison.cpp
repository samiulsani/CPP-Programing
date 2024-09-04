#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    if ((s == '>' && a > b) || (s == '<' && a < b) || (s == '=' &&a == b))
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }

    // if (s == '>')
    // {
    //     (a>b)?cout<<"Right":cout<<"Wrong";
    // }
    // else if (s == '<')
    // {
    //     (a<b)?cout<<"Right":cout<<"Wrong";
    // }
    // else if (s == '=')
    // {
    //     (a=b)?cout<<"Right":cout<<"Wrong";
    // }

    // switch (s)
    // {
    // case '>':
    //     if (a > b)
    //     {
    //         cout << "Right";
    //     }
    //     else
    //     {
    //         cout << "Wrong";
    //     }
    //     break;
    // case '<':
    //     if (a < b)
    //     {
    //         cout << "Right";
    //     }
    //     else
    //     {
    //         cout << "Wrong";
    //     }
    //     break;
    // case '=':
    //     if (a = b)
    //     {
    //         cout << "Right";
    //     }
    //     else
    //     {
    //         cout << "Wrong";
    //     }
    //     break;

    // default:
    //     break;
    // }

    return 0;
}
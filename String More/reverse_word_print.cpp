#include <bits/stdc++.h>
using namespace std;

void reverse(stringstream &ss) // For using stringstream must use '&' as reference
{
    string word;

    if (ss >> word)
    {
        reverse(ss);
        cout << word << endl;
    }

    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    reverse(ss);

    // stringstream ss(s);
    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }

    return 0;
}
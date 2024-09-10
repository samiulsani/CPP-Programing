#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (char &s : s)
    {
        if (s == '!' || s == '.' || s == '?' || s == ',')
        {
            s = ' ';
        }
    }

    stringstream ss(s);
    string word;

    int cnt = 0;
    while (ss >> word)
    {

        // for (int i = 0; i < word.size(); i++)
        // {
        //     if (word[i] >= 'A' && word[i] <= 'Z' || word[i] >= 'a' && word[i] <= 'z')
        //     {
        //         // cout << word << " ";
        //         cnt++;
        //         break;
        //     }
        // }

        cnt++;
    }
    cout << cnt << endl;

    return 0;
}
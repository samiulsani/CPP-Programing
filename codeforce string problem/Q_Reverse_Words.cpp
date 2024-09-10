#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    bool firstword=true;

    while (ss >> word)
    {
        reverse(word.begin(),word.end());
        if(!firstword)
        {
            cout<<" ";
        }
        cout << word;
        firstword = false;

        // for (int i = word.size() - 1; i >= 0; i--)
        // {

        //     cout << word[i];
        // }
        // cout << " ";
    }

    return 0;
}
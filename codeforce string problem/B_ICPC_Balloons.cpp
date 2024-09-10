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
        string s;
        cin >> s;
        bool solve[26] = {false};
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(!solve[s[i]-'A'])
            {
                sum += 2;
                solve[s[i]-'A']=true;
            }
            else{
                sum += 1;
            }

            // for (int j = i + 1; j < s.size(); j++)
            // {
            //     if (s[i] != s[j])
            //     {
            //         sum += 2;
            //     }
            //     else
            //     {
            //         sum += 1;
            //     }
            // }
        }
        cout << sum << endl;
    }

    return 0;
}
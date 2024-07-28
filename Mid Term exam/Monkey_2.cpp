#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];

    while (cin.getline(s, 100000))
    {
        int count[26] = {0};
        for (int i = 0; i < strlen(s); i++)
        {
            int val = s[i] - 97;
            count[val]++;
        }
        for (int i = 0; i < 26; i++)
        {
            // cout<<char(i+97)<<"-"<<count[i]<<endl;
            for(int j=0;j<count[i];j++)
            {
                if (count[i] > 0)
            {
                cout << char(i + 97);
            }
            }
            
        }
        cout<<endl;
    }

    return 0;
}
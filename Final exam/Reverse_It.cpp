#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id;
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        char temp = s[i].s;
        s[i].s = s[j].s;
        s[j].s = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id << endl;
    }

    return 0;
}
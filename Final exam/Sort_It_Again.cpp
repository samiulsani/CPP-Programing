#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string nm;
    int cls;
    char s;
    long long int id;
    int math_marks;
    int eng_marks;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].eng_marks < s[j].eng_marks)
            {
                swap(s[i], s[j]);
            }
            else if (s[i].eng_marks == s[j].eng_marks && s[i].math_marks < s[j].math_marks)
            {
                swap(s[i], s[j]);
            }
            else if (s[i].eng_marks == s[j].eng_marks && s[i].math_marks == s[j].math_marks && s[i].math_marks == s[j].math_marks && s[i].id > s[j].id)
            {
                swap(s[i], s[j]);
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    return 0;
}
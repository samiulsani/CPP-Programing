#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int id;
    string name;
    char section;
    int marks;
};
int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        student students[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].marks;
        }
        student temp = students[0];
        for (int i = 0; i < 3; i++)
        {
            if (students[i].marks > temp.marks)
            {
                temp=students[i];
            }
            else if((students[i].marks == temp.marks && students[i].id < temp.id)){
                temp=students[i];
            }
        }
        cout << temp.id << " " << temp.name << " " << temp.section << " " << temp.marks << endl;
        t--;
    }

    return 0;
}
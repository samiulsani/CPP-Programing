#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    student a[n];

    for (int i = 0; i < n; i++)
    {
        // getchar();
        cin.ignore();
        getline(cin,a[i].name );
        cin >> a[i].roll >> a[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout<< a[i].name<<" " << a[i].roll<<" " << a[i].marks<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int roll;
    int cls;
    double cgpa;
    student(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

student *fun()
{
    student *samiul = new student(2, 8, 2.01);
    return samiul;
}

int main()
{
    student *ans = fun();
    cout << ans->roll << " " << ans->cls << " " << ans->cgpa << endl;
    delete ans;
    cout << ans->roll << " " << ans->cls << " " << ans->cgpa << endl;

    return 0;
}


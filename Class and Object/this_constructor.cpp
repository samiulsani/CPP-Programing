#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int cls;
    int roll;
    double cgpa;
    student(int cls, int roll, double cgpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->cgpa = cgpa;
    }
};

int main()
{
    student samiul(7, 2, 2.30);
    student sani(10, 2, 3.30);
    cout << samiul.cls << " " << samiul.roll << " " << samiul.cgpa << endl;
    cout << sani.cls << " " << sani.roll << " " << sani.cgpa << endl;

    return 0;
}
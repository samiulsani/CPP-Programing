#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int cls;
    int roll;
    double cgpa;
    student(int cl, int r, double cg)
    {
        cls = cl;
        roll = r;
        cgpa = cg;
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
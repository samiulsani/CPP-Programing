#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;
    int mark1;
    int mark2;
    person(string name, int age, int mark1, int mark2) // constructor and constructor name same as the class name
    {
        this->name=name;
        this->age=age;
        this->mark1=mark1;
        this->mark2=mark2;
    }
    // create user define function
    // void print()
    // {
    //     cout << "Printing the function" << endl;
    // }

    // int totalmark()
    // {
    //     return mark1 + mark2;
    // }
};

int main()
{
    person samiul("jibon", 23, 20, 20);

    cout << samiul.name << " " << samiul.age << endl;

    // samiul.print();
    // cout << samiul.totalmark() << endl;

    return 0;
}
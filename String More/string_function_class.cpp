#include<bits/stdc++.h>
using namespace std;

class person
{
    public:
    string name;
    int age;
    int mark1;
    int mark2;
    person(string nm,int ag,int mar1,int mar2) //constructor and constructor name same as the class name
    {
        name=nm;
        age=ag;
        mark1=mar1;
        mark2=mar2;
    }
    //create user define function
    void print()
    {
        cout<<"Printing the function"<<endl;
    }

    int totalmark()
    {
        return mark1+mark2;
    }
};

int main()
{
    person samiul("samiul",23,20,20);
    cout<<samiul.name<<" "<<samiul.age<<endl;
    samiul.print();
    cout<<samiul.totalmark()<<endl;

    return 0;
}
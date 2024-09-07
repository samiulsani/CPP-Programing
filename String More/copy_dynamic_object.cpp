#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    person *s = new person("samiul islam", 24);
    person *j = new person("Jibon islam", 27);
    // cout << s->name << " " << s->age << endl;
    // s = j;
    // j->name=s->name;
    // j->age=s->age;

    *j=*s;

    // cout << s->name << " " << s->age << endl;
    // cout << j->name << " " << j->age << endl;
    delete j;
    cout << j->name << " " << j->age << endl;

    return 0;
}
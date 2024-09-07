#include<bits/stdc++.h>
using namespace std;

namespace samiul
{
    int age=23;
    void print()
    {
        cout<<"print from namespace"<<endl;
    }
}
namespace jibon
{
    int age2=23;
    void print2()
    {
        cout<<"print from namespace2"<<endl;
    }
}

using namespace samiul;
using namespace jibon;

int main()
{
    // cout<<samiul::age<<" "<<samiul::print<<endl;
    cout<<age<<endl;
    print();
    cout<<age2<<endl;

    return 0;
}
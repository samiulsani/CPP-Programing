#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int;
    *a = 20;
    cout<<"function a address"<<" "<<a<<endl;
    return a;
}

int main()
{
    int *p = fun();
    cout << "main er address"<<" "<< *p << endl;

    return 0;
}
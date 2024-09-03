#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10; // static memory

    int *p = new int; // dynamic memory create
    *p = 10;
    cout << *p << endl;

    double *d = new double; // dynamic memory created
    *d = 10.34343;
    cout << fixed << setprecision(2) << *d << endl; // print dynamic memory using dereference *

    return 0;
}
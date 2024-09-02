#include <iostream>
#include <utility>

// void get_swap(int *a, int *b)
// {
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    swap(a,b);
    // get_swap(&a, &b);
    cout << a << " " << b << endl;
}
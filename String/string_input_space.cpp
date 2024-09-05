#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;

    cin.ignore();//ignore one char or enter

    string s;
    // cin>>s;

    getline(cin,s);//use getline to take input with space.
    cout<<x<<endl;
    cout<<s<<endl;

    return 0;
}
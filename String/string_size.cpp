#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s="samiul islam sani";
    // cout<<s.size()<<endl;
    // cout<<s.capacity()<<endl;
    // cout<<s.max_size()<<endl;

    // string s="samiul islam";
    // cout<<s<<endl;
    // s.clear();
    // cout<<s<<endl;
    // cout<<s.size()<<endl;

    // string s = "samiul islam";
    // if (s.empty() == true)
    // {
    //     cout << "Yes" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    string s;
    cin >> s;
    s.resize(6);
    cout << s << endl;

    s.resize(20, 'x');
    cout << s << endl;

    return 0;
}
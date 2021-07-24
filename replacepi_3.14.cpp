#include <bits/stdc++.h>
using namespace std;

void func(string &s, int index)
{
    if (index >= s.size() - 1)
        return;
    if (s.substr(index, 2) == "pi")
    {
        s.erase(index, 2);
        s.insert(index, "3.14");
        func(s, index + 4);
    }
    else
    {
        func(s, index + 1);
    }
}

int main()
{
    string s = "xypitypiffdpi";
    //cin >> s;
    cout << "before = " << s << endl;
    func(s, 0);
    cout << "after = " << s << endl;
    return 0;
}
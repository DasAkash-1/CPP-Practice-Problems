#include <bits/stdc++.h>
using namespace std;

string check (string s);
int main(){
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < t.length(); i++)
    {
        t[i] = tolower(t[i]);
    }
    
    
    if (s == t)
    {
        cout << "20/20" << endl;
    }
    else cout << "x_x" << endl;
    return 0;
}
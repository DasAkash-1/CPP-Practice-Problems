#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'y' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            t += '.';
            t += s[i];
        }
    }
    cout << t << endl;
    return 0;
    
}
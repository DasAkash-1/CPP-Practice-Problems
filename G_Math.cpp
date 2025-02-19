#include <bits/stdc++.h>
using namespace std;

void solve(int tc){
    vector <int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    
    sort(a.begin(), a.end());

    if (a[0]*a[0] + a[1]*a[1] == a[2]*a[2])
    {
        cout << "Case " << tc << ": yes" << endl;
    }
    else cout << "Case " << tc << ": no" << endl;
}

int main() {
    int t=1; 
    cin >> t;

    int tc=1;

    while(t--) {
        solve(tc++);
    }
    return 0;
}
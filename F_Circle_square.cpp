#include <bits/stdc++.h>
using namespace std;

void solve(int tc){
    double r, sqr, crcl, area, pi = 2*acos(0.0);

    cin >> r;
    crcl = pi * r * r;
    sqr = (2 * r) * (2 * r);
    area = sqr - crcl;

    cout << "Case " << tc << ": " << fixed << setprecision(2) << area << endl;

}

int main(){
    int t = 1;
    cin >> t;

    int tc = 1;

    while (t--)
    {
        solve(tc++);
    }
   return 0; 
}
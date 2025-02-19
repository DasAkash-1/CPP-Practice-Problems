#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int a[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int len = sizeof(a) / sizeof(a[0]);
    cin >> n;
    bool l = 0;

    for (int i = 0; i < len; i++)
    {
        if (n % a[i] == 0){
            l = 1;
            break;
        }
    }
    if (l == 1)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    
    return 0;
}
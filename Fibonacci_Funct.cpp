#include<bits/stdc++.h>
using namespace std;

void fib(int a[], int n);

int main(){
    int a[100], n;
    cin >> n;
    fib(a,n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

void fib(int a[], int n){
    int i;
    a[0] = 0;
    a[1] = 1;

    for ( i = 2; i < n; i++)
    {
        a[i] = a[i -1] + a[i - 2];
    }
}

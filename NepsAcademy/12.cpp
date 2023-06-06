#include <bits/stdc++.h>

using namespace std;

int ordenar(int a, int b) {
    return a > b;
}

int main()
{
    int x;
    cin >> x;
    int a[x];
    for (int i = 0;i < x;i++) cin >> a[i];

    sort(a, a+x, ordenar);
    int auxiliary[3];
    for (int i = 0;i < 3;i++) auxiliary[i] = a[i];

    int result = 1;
    for (int i = 0;i < 3;i++) result *= auxiliary[i];

    cout << result << endl;

    return 0;
}
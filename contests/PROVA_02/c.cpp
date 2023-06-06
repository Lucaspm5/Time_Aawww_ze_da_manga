#include <bits/stdc++.h>

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main() 
{
    optimize;
    int N;
    cin >> N;

    int a, b, c;
    cin >> a >> b >> c;

    int max_a = a, max_b = b, max_c = c;

    for (int i = 1; i < N; i++) 
    {
        int a, b, c;
        cin >> a >> b >> c;

        int new_max_a = max(max_b, max_c) + a;
        int new_max_b = max(max_a, max_c) + b;
        int new_max_c = max(max_a, max_b) + c;
        max_a = new_max_a;
        max_b = new_max_b;
        max_c = new_max_c;
    }

    int result = max({ max_a, max_b, max_c });
    cout << result << endl;
    return 0;
}

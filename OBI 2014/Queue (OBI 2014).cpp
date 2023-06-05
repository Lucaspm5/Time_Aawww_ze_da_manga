#include <bits/stdc++.h>

using namespace std;

vector <int> N;

void remove(int x)
{
    for (int i = 0;i < N.size();i++) {
        if (N[i] == x) {
            N.erase(N.begin()+i);
        }
    }
}

int main()
{
    int n,a;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a;
        N.push_back(a);
    }
    int b,x;
    cin >> b;
    for (int i = 0;i < b;i++) {
        cin >> x;
        remove (x);
    }
    
    for (auto i : N) cout << i;
    cout << endl;
    
    return 0;
}

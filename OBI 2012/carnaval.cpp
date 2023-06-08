#include <bits/stdc++.h>

using namespace std;

int main() 
{
    vector<double> notes(5);
    double sum = 0;
    for (int i = 0; i < 5; i++) 
    {
        cin >> notes[i];
    }
    sort(notes.begin(), notes.end());
    for (int i = 1; i < 4; i++) 
    {
        sum += notes[i];
    }
    cout << fixed << setprecision(1);
    cout << sum << endl;
}

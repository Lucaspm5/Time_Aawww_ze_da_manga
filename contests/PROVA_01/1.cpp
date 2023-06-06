#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int size;
    cin >> size;
    vector<int> numbers(size);
    for (int i = 0; i < size; i++) 
    {
        cin >> numbers[i];
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) 
    {
        int start, end;
        cin >> start >> end;
        int sum = 0;
        for (int j = start; j <= end; j++) 
        {
            sum += numbers[j];
        }
        cout << sum << endl;
    }
    return 0;
}
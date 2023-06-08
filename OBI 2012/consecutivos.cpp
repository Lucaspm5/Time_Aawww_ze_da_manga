#include <iostream>
#include <map>

using namespace std;

int main()
{
    int size, point = 1, point_max = 1;
    cin >> size;
    int vet[size];
    for (int i = 0; i < size; i++)
    {
        cin >> vet[i];
    }
    for(int i = 1; i <= size; i++)
    {
        if(vet[i] == vet[i-1])
            point++;
        else
        {
            point_max = max(point_max, point);
            point = 1;
        }
    }
    int upper = max(point_max, point);
    cout << upper << endl;
}

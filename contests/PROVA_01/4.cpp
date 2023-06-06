#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    scanf("%d",&size);
    vector<int> values(size);
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&values[i]);
    }
    int q;
    scanf("%d",&q);
    sort(values.begin(), values.end());
    for(int i = 0; i < q; i++)
    {
        int cont = 0;
        int value;
        scanf("%d",&value);
        for(int j = 0; j < size; j++)
        {
            if(value >= values[j])
                cont++;
        }
        printf("%d\n",cont);
    }
}
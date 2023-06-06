#include <bits/stdtr1c++.h>

using namespace std;

int main()
{
    queue<int> fila;
    int size;
    cin >> size;
    while(size--)
    {
        int op;
        scanf("%d",&op);
        if (op == 1)
        {
            int value;
            scanf("%d",&value);
            fila.push(value);
        }
        else if (op == 2)
        {
            if (!fila.empty())
                fila.pop();
        }
        else
        {
            if (fila.empty())
                printf("Empty!\n");
            else
                printf("%d\n",fila.front());
        }
    }
    return 0;
}

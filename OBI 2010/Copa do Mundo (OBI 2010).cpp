#include <bits/stdc++.h>

using namespace std;

char jogos[] = "ABCDEFGHIJKLMNOP", quartas[8], semi[4], final[2], campeao[1];

int partidas(int jogos, char* times, char* vencedores)
{
    int time1, time2;
    for (int i = 0;i < jogos;i++) {
        scanf("%d %d", &time1, &time2);
        (time1 > time2) ? vencedores[i] = times[i*2] : vencedores[i] = times[i*2+1];
    }
}

int main()
{
    partidas(8, jogos, quartas);
    partidas(4, quartas, semi);
    partidas(2, semi, final);
    partidas(1, final, campeao); 

    cout << campeao[0] << endl;

    return 0;
}

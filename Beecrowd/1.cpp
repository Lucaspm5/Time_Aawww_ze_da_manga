#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    string mensagem, crib;
    cin >> mensagem >> crib;
    // Defino o for com mensagem.size() - crib.size() porque só nescessito percorrer a diferença entre a mensagem e a crib
    for (int i = 0;i <= mensagem.size() - crib.size();i++) {
        int validad = 1;
        // Esse lop serve pra percorrer letra por letra da crib
        for (int j = 0;j < crib.size();j++) {
            // mensagem[i + j] como funciona ?
            if (mensagem[i + j] == crib[j]) { validad = 0;break; }
        }
        if (validad) count++;
    }
    cout << count << endl;

    return 0;
}
// Mensagem[i + j], funciona como ?
/*
    Exemplo de entrada:
    FDMLCRDMRALF
    ARMADA
    i + j funciona como a exclusão do indice i, por exemplo:
    1 loop:
    i = 0, j...
    F == A ? D == R ? M == M ? sim então para e o i é incrementado i + 1
    i = 1, j...
    D == A ? M == R ... nao, entao count + 1
    assim sucessivamente, entao o i + j funcionara como um atualizador de caracteres, sempre afastando em 1 o comparativo
*/
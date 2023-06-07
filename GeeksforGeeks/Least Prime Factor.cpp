#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> leastPrimeFactor(int n) {
        // Defino o valor da variavel validar_primo com o tamanho n + 1
        vector<int> validar_primo(n + 1);
        // percorro do indice 2 até o N, pois quero identificar os primos
        for (int i = 2; i <= n; i++) {
            // percorro o vetor validar_primo[i] se for = a 0, significa que ainda n foi atribuido nd, se n adiciona i 
            if (validar_primo[i] == 0) {
                validar_primo[i] = i;
                // aqui determino j como o multiplo de i, o que isso significa ? significa que se o j (multiplo de i) foi menor que o tamanho
                // isso garante que o multiplo pegue o indice primo mais proximo, mas como assim ?
                /*
                    Se a entrada por exemplo fosse n = 3
                    validar_primo[0] = 0
                    validar_primo[1] = 1
                    validar_primo[2] = 2
                    2*2 >= 3 ? sim
                    entao o laço do for não executa
                    validar_primo[3] = 3
                    validar_primo[] = 1, 2, 3
                */ 
                /*
                    se o n = 4
                    validar[0] = 0;
                    validar[1] = 1;
                    validar[2] = 2;
                    2 * 2 = 4 ? sim, entao executa o 2 for
                    validar[4] == 0 ? sim o indice ainda n foi preenchido
                    validar[4] == 2, 2 é o indice da execução, isso significa que o primo mais proximo é 2
                    validar[3] = 3, lembre-se que o validar tem n + 1 posições o que inclue o zero
                    validar[] = 0,1,2,3,2
                */
                for (int j = i * i; j <= n; j += i) {
                    if (validar_primo[j] == 0) {
                        validar_primo[j] = i;
                    }
                }
            }
        }
        validar_primo[1] = 1;
        return validar_primo;
    }
};

int main() {
    int t;
    cin >> t;
    // Define t com qnts vezes o laço ira se repetir
    while (t--) {
        int n;
        // Define n como o numero a ser buscado o primo em evidencia
        cin >> n;
        // OB é objeto chamado ob para a classe solution
        Solution ob;
        // Define um vector para receber o metodo leastPrimeFactor
        vector<int>ans = ob.leastPrimeFactor(n);
        // ans[i] imprimir os fatores primos
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl; 
    }
    return 0;
}

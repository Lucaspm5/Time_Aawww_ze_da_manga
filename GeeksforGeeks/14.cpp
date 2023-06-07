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
                // aqui determino j como o multiplo de i, e percorro ele apenas 
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

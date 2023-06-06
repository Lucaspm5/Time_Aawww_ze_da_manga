#include <bits/stdc++.h>

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


using namespace std;

int knapsack(int N, int W, const vector<int>& weights, const vector<int>& values) 
{
    vector<int> result(W + 1, 0); // iniciar com zeros 

    for (int i = 0; i < N; i++) 
    {
        for (int j = W; j >= weights[i]; j--) 
        {
            result[j] = max(result[j], values[i] + result[j - weights[i]]);
        }
    }

    return result[W];
}

int main() 
{
    optimize;
    int N, W;
    scanf("%d%d",&N,&W);

    vector<int> weights(N);
    vector<int> values(N);

    for (int i = 0; i < N; i++) 
    {
        scanf("%d%d",&weights[i],&values[i]);
    }

    int result = knapsack(N, W, weights, values);
    printf("%d\n",result);
    return 0;
}
 
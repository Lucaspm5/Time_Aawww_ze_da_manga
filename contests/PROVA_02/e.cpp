#include <bits/stdc++.h>

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int minTotalCost(int N, int K, const vector<int>& heights) 
{
    vector<int> result(N, INT_MAX); 
    result[0] = 0; 

    for (int i = 0; i < N; i++) 
    {
        for (int j = i + 1; j <= i + K && j < N; j++) 
        {
            result[j] = min(result[j], result[i] + abs(heights[i] - heights[j]));
        }
    }

    return result[N - 1];
}

int main() 
{
    optimize;
    int N, K;
    cin >> N >> K;
    vector<int> heights(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> heights[i];
    }
    int minCost = minTotalCost(N, K, heights);
    cout << minCost << endl;
    return 0;
}

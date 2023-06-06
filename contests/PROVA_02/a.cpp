#include <bits/stdc++.h>

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


using namespace std;

int minCostToReachN(const vector<int>& heights) 
{
    int N = heights.size();
    vector<int> result(N, INT_MAX);
    result[0] = 0; 

    for (int i = 1; i < N; i++) 
    {
        if (i >= 2) 
        {
            result[i] = min(result[i - 1] + abs(heights[i] - heights[i - 1]), result[i - 2] + abs(heights[i] - heights[i - 2]));
        }
        else 
        {
            result[i] = result[i - 1] + abs(heights[i] - heights[i - 1]);
        }
    }
    return result[N - 1];
}

int main() 
{
    optimize;
    int N;
    cin >> N;
    vector<int> heights(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> heights[i];
    }
    int minCost = minCostToReachN(heights);
    cout << minCost << endl;
    return 0;
}

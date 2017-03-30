#include <bits/stdc++.h>
using namespace std;
int value[100], weight[100],n,W;
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int knapsack(int W, int weight[], int value[], int n)
{
    int i,j,adjacency[n+1][W+1];
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=W; j++)
        {
            if(i==0 || j==0)
            {
                adjacency[i][j]=0;
            }
            else if(weight[i-1] <= j-1)
            {
                adjacency[i][j]= max(value[i-1] + adjacency[i-1][j-weight[i-1]],adjacency[i-1][j]);
            }
            else
            {
                adjacency[i][j]=adjacency[i-1][j];
            }
        }
    }
    for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= W; j ++)
        {
            cout << adjacency[i][j] << " ";
        }
        cout << endl;
    }

    return adjacency[n][W];
}
int main()
{
    int i;
    cout << "Enter the number of items in a Knapsack: ";
    cin >> n;

    for(i=0; i<n; i++)
    {
        //cout << "Enter value and weight for item " << i << ": ";
        cin >> value[i] >> weight[i];
    }
    cout << "The capacity of Knapsack: ";
    cin >> W;
    cout << knapsack(W,weight,value,n);
    return 0;
}

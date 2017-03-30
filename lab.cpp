#include<iostream>
using namespace std;
void coinChange(int totalTk, int coins[], int totalCoins)
{
    int matrix[totalCoins+1][totalTk];
    int i, j;
    for(i = 0; i < totalCoins; i++)
    {
        for(j = 0; j <= totalTk; j++)
        {
            if(i == 0 || j == 0)
            {
                matrix[i][j] = 0;
            }
            else if( j >= coins[i])
            {
                if(matrix[i-1][j] != 0)
                {
                    matrix[i][j] = min(matrix[i-1][j], 1 + matrix[i][j-coins[i]]);
                }
                else
                {
                    matrix[i][j] = 1 + matrix[i][j-coins[i]];
                }
            }
            else
            {
                matrix[i][j] = matrix[i-1][j];
            }
        }
    }
    for(i = 0 ; i < totalCoins; i++)
    {
        for(j = 0; j <= totalTk; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Total number of coins needed: " << matrix[totalCoins-1][totalTk-1] << endl;

}


int main()
{
    int totalTk = 10;
    int coins[] = {0, 1, 5, 6, 8};
    int totalCoins = sizeof(coins)/sizeof(coins[0]);
    coinChange(totalTk, coins, totalCoins);
    return 0;
}

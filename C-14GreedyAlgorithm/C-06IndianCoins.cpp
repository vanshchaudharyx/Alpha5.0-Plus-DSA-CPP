#include <iostream>
#include <vector>
using namespace std;

int getMinChange(vector<int> coins, int V)
{
    int ans = 0;
    int n = coins.size();
    for (int i = coins.size(); i >= 0 && V > 0; i--)
    {
        if (V >= coins[i])
        {
            ans = ans + V / coins[i]; // How many notes to be used.
            V = V % coins[i];         // How much value left
        }
    }
    cout << "Minimum coins for change=" << ans << endl;
    return ans;
}
int main()
{
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000}; // O(n)
    // If there is sorting then O(nlogn).
    int value = 590;
    getMinChange(coins, value);
    return 0;
}
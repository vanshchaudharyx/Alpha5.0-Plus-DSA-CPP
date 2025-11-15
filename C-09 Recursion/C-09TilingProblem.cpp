#include <iostream>
#include <string>
using namespace std;
int tilingProblem(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // vertical
    int ans1 = tilingProblem(n - 1); // First this call works and then second call works.
    // Horizontal
    int ans2 = tilingProblem(n - 2);
    return ans1 + ans2;
}

int main()
{
    int n =3;
    cout << tilingProblem(n) << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
void RemoveDup(string str, string ans, int i, int map[26])
{
    if (i == str.size())
    {
        cout << ans << endl;
        return;
    }
    char ch = str[i];
    int mapidx = (int)ch - 'a';
    if (map[mapidx] == true) // If the character is duplicate.
    {
        RemoveDup(str, ans, i + 1, map);
    }
    else
    {
        map[mapidx] = true; // Mark the character as visited.
        RemoveDup(str, ans + str[i], i + 1, map);
    }
}

int main()
{
    string str = "appnnacollege";
    string ans = " ";
    int map[25] = {false};
    RemoveDup(str, ans, 0, map);

    return 0;
}
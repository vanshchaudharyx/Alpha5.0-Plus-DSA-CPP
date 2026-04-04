#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second; // ascending-endtime
    // return p1.second > p2.second; // descending-endtime
    // return p1.first < p2.first;   // ascending-starttime
    // return p1.fisrt > p2.first;   // descending-endtime
}

int main()
{
    vector<int> start = {0, 1, 2};
    vector<int> end = {9, 2, 4};
    vector<pair<int, int>> pairs(3, make_pair(0, 0));
    pairs[0] = make_pair(0, 9);
    pairs[1] = make_pair(1, 2);
    pairs[2] = make_pair(2, 4);
    for (int i = 0; i < pairs.size(); i++)
    {
        cout << "P" << i << ":" << pairs[i].first << "," << pairs[i].second << endl;
    }

    sort(pairs.begin(), pairs.end(), compare);
    cout << "------Sorted------" << endl;
    for (int i = 0; i < pairs.size(); i++)
    {
        cout << "P" << i << ":" << pairs[i].first << "," << pairs[i].second << endl;
    }

    return 0;
}
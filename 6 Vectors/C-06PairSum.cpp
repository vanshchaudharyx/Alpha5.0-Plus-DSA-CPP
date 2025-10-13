#include <iostream>
#include <vector>

using namespace std;
vector<int> pairsum(vector<int> arr, int target)
{
    int st = 0;
    int end = arr.size() - 1;
    int currentsum = 0;
    vector<int> ans;
    while (st < end)
    {
        currentsum = arr[st] + arr[end];
        if (currentsum == target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }  
        else if (currentsum > target)
        {
            end--;
        }
        else
        {
            st++;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    pairsum(vec, target);
    vector<int> ans = pairsum(vec, target);
    cout << vec[ans[0]] << "," << vec[ans[1]] << endl;

    return 0;
}
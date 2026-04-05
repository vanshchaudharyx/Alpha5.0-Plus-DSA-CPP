#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Job
{
public:
    int idx;
    int deadline;
    int profit;
    Job(int idx, int deadline, int profit)
    {
        this->idx = idx;
        this->deadline = deadline;
        this->profit = profit;
    }
};

int maxProfit(vector<pair<int, int>> pairs)
{
    int n = pairs.size();
    vector<Job> jobs;
    for (int i = 0; i < n; i++)
    {
        jobs.emplace_back(i, pairs[i].first, pairs[i].second); // Emplace internally called the constructor and convert in to object.
    }
    sort(jobs.begin(), jobs.end(), [](Job &a, Job &b)
         {
             return a.profit > b.profit; //  Descending on the basis of profit.\
             // Lambda funtion -> used for single use.
         });
    cout << "Selecting Job" << jobs[0].idx << endl;
    int profit = jobs[0].profit;
    int safedeadline = 2;
    for (int i = 1; i < n; i++)
    {
        if (jobs[i].deadline >= safedeadline)
        {
            cout << "Selecting Job" << jobs[i].idx << endl;
            profit = profit + jobs[i].profit;
            safedeadline++;
        }
    }
    cout << "max profit=" << profit << endl;
    return profit;
}

int main()
{
    ;
    int n = 4;
    vector<pair<int, int>> jobs(n, make_pair(0, 0));
    jobs[0] = make_pair(4, 20);
    jobs[1] = make_pair(1, 10);
    jobs[2] = make_pair(1, 40);
    jobs[3] = make_pair(1, 30);
    maxProfit(jobs);

    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

typedef long long int LL;

void Print(vector<int> arr);
void PrintLL(vector<LL> arr);
void make_mutation(vector<int> v);

void solve()
{
    vector<vector<LL>> stack;
    map<LL, LL> map_arr;
    LL index = -1;
    LL n;
    LL ans;
    LL max = 0;
    cin >> n;
    map<LL, LL>::iterator it;
    for (LL i = 0; i < n; i++)
    {
        LL current;
        cin >> current;
        map_arr[current]++;
        if (map_arr[current] >= max)
        {
            max = map_arr[current];
        }
    }
    // for (it = map_arr.begin(); it != map_arr.end(); it++)
    // {
    // cout << it->first << " : " << it->second << endl;
    // }
    if (max >= n - max)
    {
        ans = max - (n - max);
    }
    else
    {
        if (n % 2 == 1)
        {
            ans = 1;
        }
        else
        {
            ans = 0;
        }
    }
    cout << ans << endl;
}

int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        solve();
    }
    return 0;
}
void PrintLL(vector<LL> arr)
{
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}
void Print(vector<int> arr)
{
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}
void make_mutation(vector<int> v)
{

    do
    {
        for (auto x : v)
        {
            cout << x << ' ';
        }
        cout << endl;
    } while (std::next_permutation(v.begin(), v.end()));
}
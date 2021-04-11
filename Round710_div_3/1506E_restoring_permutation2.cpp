#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

typedef long long int LL;

void Print(vector<int> arr);
void make_mutation(vector<int> v);

void solve()
{
    int n;
    vector<int> pre_array;
    vector<int> stack;
    int max;
    cin >> n;

    vector<int> min_array(n);
    vector<int> max_array(n);

    int prev = -1;
    int temp = -1;
    for (int i = 1; i <= n; i++)
    {
        pre_array.push_back(i);
    }
    for (int i = 0; i < n; prev = temp, i++)
    {
        cin >> temp;
        if (temp != prev)
        {
            min_array[i] = temp;
            max_array[i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min_array[i] != 0)
        {
            pre_array.erase(remove(pre_array.begin(), pre_array.end(), min_array[i]), pre_array.end());
        }
    }
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (min_array[i] == 0)
        {
            min_array[i] = pre_array[++index];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (max_array[i] == 0)
        {
            vector<int>::iterator low;
            low = --lower_bound(pre_array.begin(), pre_array.end(), max);
            max_array[i] = pre_array[low - pre_array.begin()];
            pre_array.erase(remove(pre_array.begin(), pre_array.end(), max_array[i]), pre_array.end());
        }
        else
        {
            max = max_array[i];
        }
    }

    Print(min_array);
    Print(max_array);
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
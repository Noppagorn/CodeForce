#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

typedef long long int LL;

void Print(vector<int> arr);
void make_mutation(vector<int> v);

void solve()
{
    int n;
    set<int> pre_array;
    set<int> stack;
    int max;
    cin >> n;

    vector<int> min_array(n);
    vector<int> max_array(n);

    int prev = -1;
    int temp = -1;
    for (int i = 1; i <= n; i++)
    {
        pre_array.insert(i);
        stack.insert(i);
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
            // pr?e_array.erase(remove(pre_array.begin(), pre_array.end(), min_array[i]), pre_array.end());
            pre_array.erase(min_array[i]);
            stack.erase(min_array[i]);
        }
    }

    set<int>::const_iterator it;
    for (int i = 0; i < n; i++)
    {
        if (min_array[i] == 0)
        {
            it = pre_array.begin();
            min_array[i] = *it;
            pre_array.erase(it);
        }
        else
        {
            max = min_array[i];
        }
    }

    // vector<int> pre_array2 = pre_array;

    for (int i = 0; i < n; i++)
    {
        if (max_array[i] == 0)
        {
            // min_array[i] = pre_array[++index];
            it = --stack.lower_bound(max);
            max_array[i] = *it;
            stack.erase(it);
        }
        else
        {
            max = max_array[i];
        }
    }

    Print(min_array);
    // cout << "pre_array : ";
    // Print(pre_array);
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
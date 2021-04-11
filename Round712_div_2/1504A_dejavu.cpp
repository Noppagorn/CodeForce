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
    string inp_str;
    string left;
    string right;
    string reverse_str;
    bool is_not_same = false;
    cin >> inp_str;
    // reverse_str = inp_str;
    int a_pos = 0, new_j;
    for (int i = 0; i < inp_str.length(); i++)
    {
        new_j = i;
        if (i > a_pos)
        {
            new_j = i - 1;
        }
        if (new_j == a_pos)
        {
            if ('a' != inp_str[inp_str.length() - new_j - 1])
            {
                // cout << j << " _> " << inp_str[inp_str.length() - new_j - 1] << endl;
                is_not_same = true;
                break;
            }
        }
        a_pos++;
    }
    if (is_not_same)
    {
        inp_str.insert(new_j, "a");
        cout << "YES" << endl;
        cout << inp_str << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
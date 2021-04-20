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
    bool ans = true;
    int p, c;
    int prev_p, prev_c;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> c;
        if (p < c)
        {
            ans = false;
        }
        if (i == 0)
        {
            prev_p = p;
            prev_c = c;
        }
        else
        {
            if (p < prev_p || c < prev_c)
            {
                ans = false;
            }
            else
            {
                int play_diff = p - prev_p;
                int clear_diff = c - prev_c;
                if (clear_diff > play_diff)
                {
                    ans = false;
                }
            }
        }
        prev_p = p;
        prev_c = c;
    }
    cout << (ans ? "YES" : "NO") << endl;
}

int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
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
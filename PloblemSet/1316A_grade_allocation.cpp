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
    int n, m;
    int sum = 0;
    int ans;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
    }
    if (sum >= m)
    {
        ans = m;
    }
    else
    {
        ans = sum;
    }
    cout << ans << endl;
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
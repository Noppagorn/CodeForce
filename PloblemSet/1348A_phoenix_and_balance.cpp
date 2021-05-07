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
LL sum_array(vector<LL> array, int from, int to)
{
    LL result = 0;
    for (int i = from; i < to; i++)
    {
        result += array[i];
    }
    return result;
}
void solve()
{
    vector<LL> stack;
    vector<LL> array;

    LL min_val;
    LL max_val;
    int index = -1;
    int n;
    int len;
    LL ans = 10000000;
    LL sum_all = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        LL temp = pow(2, i);
        sum_all += temp;
        array.push_back(temp);
    }
    len = n / 2;
    for (int i = 0; i < n - len; i++)
    {
        LL sum_pos = sum_array(array, i, i + len);
        LL temp = (sum_all - sum_pos) - sum_pos;
        if (temp < ans)
        {
            ans = temp;
        }
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
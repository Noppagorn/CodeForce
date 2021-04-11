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

double cal_optimize(double d, double x)
{
    return round(d / (x + 1));
}

void solve()
{
    int n, d;
    string ans;
    cin >> n >> d;

    int MAG = (int)sqrt(d) + 10;
    int x;
    for (x = 0; x < MAG; x++)
    {
        if (x + (d + x) / (x + 1) <= n)
        {
            break;
        }
    }
    cout << (x < MAG ? "YES" : "NO") << endl;
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

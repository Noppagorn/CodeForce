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
string rotate_string(string n_str)
{
    string result;
    while (n_str != "")
    {
        result += n_str[n_str.length() - 1];
        n_str.pop_back();
    }
    return result;
}
void solve()
{
    string n;
    string n_str;
    cin >> n;
    n_str = n + rotate_string(n);
    cout << n_str << endl;
}

int main()
{
    solve();
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
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

typedef long long int LL;
//not pass
void Print(vector<int> arr);
void make_mutation(vector<int> v);
void solve()
{
    int len;
    int c1 = 0, c0 = 0;
    string str1;
    string str2;
    int max = 0;
    cin >> len;
    cin >> str1;
    cin >> str2;
    for (int i = 0; i < len; i++)
    {
        if (str1[i] == '1')
        {
            c1++;
        }
        else
        {
            c0++;
        }
        if (str1[i] != str2[i])
        {
            max = i;
        }
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
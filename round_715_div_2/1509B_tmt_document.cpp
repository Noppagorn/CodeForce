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

bool counting_TMT(string str)
{
    int count_t = 0;
    int count_w = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'T')
        {
            if (count_w == 0)
            {
                count_t++;
            }
            else
            {
                count_t--;
                count_w--;
            }
        }
        else
        {
            if (count_t > 0)
            {
                count_w++;
            }
        }
    }
    if (count_w == 0 && count_t == 0)
    {
        return true;
    }
    return false;
}

bool solve()
{
    int n;
    string str;
    vector<int> index_m, index_t;
    cin >> n;
    cin >> str;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'T')
        {
            index_t.push_back(i);
        }
        else
        {
            index_m.push_back(i);
        }
    }
    if (index_m.size() * 2 != index_t.size())
    {
        return false;
    }
    for (int i = 0; i < index_m.size(); i++)
    {
        if (index_t[i] > index_m[i] || index_t[i + index_m.size()] < index_m[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        cout << (solve() ? "YES" : "NO") << endl;
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
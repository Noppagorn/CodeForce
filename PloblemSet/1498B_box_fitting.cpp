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

bool sort_function(int i, int j)
{
    return (i < j);
}

void solve()
{
    int n, w;
    int count_w = 0;
    int count = 0;
    int true_value;
    vector<int> array(20);
    vector<int>::iterator it;

    cin >> n >> w;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        array[log2(temp)]++;
    }
    for (int i = 19; i >= 0;)
    {
        if (array[i] == 0)
        {
            i--;
            continue;
        }
        for (int j = i; j >= 0;)
        {
            if (array[j] == 0)
            {
                j--;
                continue;
            }
            true_value = pow(2, j);
            if (count_w + true_value <= w)
            {
                count_w += true_value;
                array[j]--;
            }
            else
            {
                j--;
            }
        }
        count++;
        count_w = 0;
    }
    cout << count << endl;
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
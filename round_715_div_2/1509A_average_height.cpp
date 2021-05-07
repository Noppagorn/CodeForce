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
    vector<int> array;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0 && i + 1 != n)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (array[j] % 2 == 1 && i < j)
                {
                    // cout << "-." << array[i] << endl;
                    int keep;
                    keep = array[j];
                    array[j] = array[i];
                    array[i] = keep;
                    break;
                }
            }
        }
    }
    Print(array);
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
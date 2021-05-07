#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;

typedef long long int LL;

void Print(vector<LL> arr);
void make_mutation(vector<int> v);
const int MAX = 2e3 + 5;
LL mem[MAX][MAX];

LL dynamic_programming(vector<LL> &array, int smallest, int largest)
{
    if (mem[smallest][largest] != -1)
    {
        return mem[smallest][largest];
    }
    if (smallest == largest)
    {
        return 0;
    }
    return mem[smallest][largest] = array[largest] - array[smallest] +
                                    min(dynamic_programming(array, smallest + 1, largest), dynamic_programming(array, smallest, largest - 1));
}

void solve()
{
    int n;
    vector<LL> array;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        LL temp;
        cin >> temp;
        array.push_back(temp);
    }
    sort(array.begin(), array.end());
    memset(mem, -1, sizeof mem);

    cout << dynamic_programming(array, 0, n - 1) << endl;
}

int main()
{
    solve();
    return 0;
}

void Print(vector<LL> arr)
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
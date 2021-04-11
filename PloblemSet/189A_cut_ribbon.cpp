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

int sum_array(vector<int> array)
{
    int sum = 0;
    for (auto x : array)
    {
        sum += x;
    }
    return sum;
}

void solve()
{
    int n;
    int a, b, c;
    int z;
    int max = 0;
    int temp = 0;
    int count = 0;
    vector<int> array;
    vector<int> stack;
    cin >> n;
    cin >> a >> b >> c;
    // cout << a << " " << b << " " << c << endl;
    for (int x = 0; x <= n; x++)
    {
        int temp;
        count = 0;
        for (int y = 0; y <= n; y++)
        {
            temp = n - (x * a) - (y * b);

            z = temp / c;
            if (z < 0)
            {
                break;
            }
            count = x + y + z;
            if (count > max && (x * a) + (y * b) + (z * c) == n)
            {
                max = count;
                // cout << x << " " << y << " " << z << endl;
            }
        }
    }
    cout << max << endl;
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

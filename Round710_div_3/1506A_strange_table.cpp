#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

typedef long long int LL;

void Print(vector<int> arr);

void process()
{
    LL n, m, x;
    LL target_row, target_col;
    LL current_row = 1, current_col = 1;
    LL count = 1;
    cin >> n >> m >> x;

    if (x % n != 0)
    {
        target_col = (x / n) + 1;
        target_row = x % n;
    }
    else
    {
        target_col = x / n;
        target_row = n;
    }
    cout << (m * (target_row - 1) + target_col) << endl;
}

int main()
{
    int testCase;
    cin >> testCase;
    for (int t = 0; t < testCase; t++)
    {
        process();
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
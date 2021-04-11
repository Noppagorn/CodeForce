#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

typedef long long int LL;
void Print(vector<LL> arr);
// not pass
void process()
{
    LL n, width;
    vector<LL> rectangles;
    LL sum = 0;
    cin >> n >> width;

    for (int i = 0; i < n; i++)
    {
        LL temp;
        cin >> temp;
        // rectangles.push_back(temp);
        sum += temp;
    }
    if (sum % width == 0)
    {
        sum = sum / width;
    }
    else
    {
        sum = sum / width;
        sum++;
    }
    cout << sum << endl;
}

int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        process();
    }
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
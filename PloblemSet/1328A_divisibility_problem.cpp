#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
// finish
void process()
{
    int a, b;
    int count = 0;
    int ans;
    cin >> a >> b;

    if (a % b == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << b - (a % b) << endl;
    }
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

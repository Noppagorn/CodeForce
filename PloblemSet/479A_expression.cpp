#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    vector<int> arr;
    int max = 0;
    cin >> a >> b >> c;

    //process
    arr.push_back(a * b * c);
    arr.push_back((a + b) * c);
    arr.push_back(a * (b + c));
    arr.push_back(a + b + c);
    for (auto x : arr)
    {
        if (x > max)
        {
            max = x;
        }
    }
    cout << max << endl;
    return 0;
}

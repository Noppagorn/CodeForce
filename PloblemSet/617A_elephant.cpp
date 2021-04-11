#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int step;
    int count = 0;
    cin >> step;

    //process
    count += step / 5;
    step = step % 5;
    count += step / 4;
    step = step % 4;
    count += step / 3;
    step = step % 3;
    count += step / 2;
    step = step % 2;
    count += step;
    cout << count << endl;
    return 0;
}

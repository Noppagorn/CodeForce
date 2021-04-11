#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int money;
    int count = 0;
    cin >> money;

    //process
    count += money / 100;
    money = money % 100;
    count += money / 20;
    money = money % 20;
    count += money / 10;
    money = money % 10;
    count += money / 5;
    money = money % 5;
    count += money;
    cout << count << endl;
    return 0;
}

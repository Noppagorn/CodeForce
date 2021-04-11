//a_odd_divisor.cpp

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    for (int t = 0; t < testCase; t++)
    {
        long long int n;
        bool isHave = false;
        cin >> n;
        if (n % 2 == 1)
        {
            isHave = true;
        }
        else
        {
            while (n % 2 == 0)
            {
                n /= 2;
            }
            if (n > 1)
                isHave = true;
        }
        cout << (isHave ? "YES" : "NO") << endl;
    }
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

typedef long long int LL;
void Print(vector<int> arr);

LL get_sum_digit(LL n)
{
    LL sum = 0;
    while (n)
    {
        sum += n % 10;

        n = n / 10;
    }
    return sum;
}

LL find_gcd(LL a, LL b)
{
    if (b == 0)
    {
        return a;
    }
    return find_gcd(b, a % b);
}

void process()
{
    LL n;
    LL res;
    LL sum_digit;
    cin >> n;
    // cout << get_sum_digit(n) << endl;
    while (true)
    {
        sum_digit = get_sum_digit(n);
        res = find_gcd(n, sum_digit);

        // cout << "->" << res << " : " << sum_digit << endl;
        if (res > 1)
        {
            break;
        }
        else
        {
            n++;
        }
    }
    cout << n << endl;
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

void Print(vector<int> arr)
{
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}
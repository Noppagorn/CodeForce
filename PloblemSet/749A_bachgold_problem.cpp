#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

typedef long long int LL;

void Print(vector<int> arr);
void make_mutation(vector<int> v);

int main()
{
    LL n;
    LL num_prime;
    cin >> n;
    num_prime = n / 2;
    cout << num_prime << endl;
    for (int i = 0; i < num_prime; i++)
    {
        if (i + 1 == num_prime && n % 2 == 1)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 2 << (i + 1 == num_prime ? "\n" : " ");
        }
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
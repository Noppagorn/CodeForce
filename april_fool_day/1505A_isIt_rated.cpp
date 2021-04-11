#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <limits>
#include <ios>
using namespace std;

typedef long long int LL;

void Print(vector<int> arr);
void make_mutation(vector<int> v);

int main()
{
    char inp[80];
    cin.clear();
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // cin.getline(inp, 80);
    while (cin.getline(inp, 80))
    {
        cout << "No" << endl;
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
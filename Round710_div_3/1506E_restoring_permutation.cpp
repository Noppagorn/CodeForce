#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

typedef long long int LL;

void Print(vector<int> arr);
void make_mutation(vector<int> v);

void solve()
{
    int n;
    int prev;
    vector<int> pre_array;
    vector<int> stack;
    vector<int> min_array;
    vector<int> max_array;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (i == 0)
        {
            min_array.push_back(temp);
            max_array.push_back(temp);
            for (int j = 1; j < temp; j++)
            {
                stack.push_back(j);
                pre_array.push_back(j);
            }

            prev = temp;
        }
        else
        {
            if (prev < temp)
            {
                min_array.push_back(temp);
                max_array.push_back(temp);

                if (temp - prev > 1)
                {
                    for (int j = prev + 1; j < temp; j++)
                    {
                        stack.push_back(j);
                        pre_array.push_back(j);
                    }
                }
                prev = temp;
            }
            else
            {
                min_array.push_back(pre_array.front());
                pre_array.erase(pre_array.begin());

                max_array.push_back(stack.back());
                stack.pop_back();
            }
        }
    }
    Print(min_array);

    Print(max_array);
}

int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        solve();
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
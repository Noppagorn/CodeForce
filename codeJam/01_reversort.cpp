#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void Print(vector<int> arr)
{
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

int find_index_min(vector<int> array, int i)
{
    int min = 1000000;
    int min_index = -1;
    for (int x = i; x < array.size(); x++)
    {
        if (array[x] < min)
        {
            min = array[x];
            min_index = x;
        }
    }
    return min_index;
}

void process(int testCase)
{
    int num;
    int j;
    int count = 0;
    vector<int> array;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    for (int i = 0; i < array.size() - 1; i++)
    {
        j = find_index_min(array, i);
        count += (j + 1) - (i + 1) + 1;
        reverse(array.begin() + i, array.begin() + j + 1);
        // cout << i << "," << j << ", " << count << endl;
        // Print(array);
    }
    cout << "Case #" << testCase << ": " << count << endl;
}

int main()
{
    int testCase;
    cin >> testCase;
    for (int t = 1; t <= testCase; t++)
    {
        process(t);
    }
    return 0;
}

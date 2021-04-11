#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int find_index_min(vector<int> array, int i, int j)
{
    int min = 1000000;
    int min_index = -1;
    for (int i = i; i < j; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            min_index = i;
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
        j = find_index_min(array, i, j);
        count += (j + 1) - (i + 1) + 1;
        reverse(array.begin() + i, array.begin() + j);
    }
    cout << "Case #" << testCase << ": " << count << endl;
}

int main()
{
    int testCase;
    cout << "hello" << endl;
    cin >> testCase;
    for (int t = 1; t <= testCase; t++)
    {
        process(t);
    }
    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

typedef long long int LL;
void Print(vector<LL> arr);

void process()
{
    LL n, width;
    vector<LL> rectangles;
    LL level = 0;
    cin >> n >> width;

    for (int i = 0; i < n; i++)
    {
        LL temp;
        cin >> temp;
        rectangles.push_back(temp);
    }
    sort(rectangles.begin(), rectangles.end(), greater<LL>());
    // Print(rectangles);

    for (int i = 0; i < rectangles.size() - 1; i++)
    {

        if (rectangles[i] == -1)
        {
            continue;
        }
        LL sum = rectangles[i];
        for (int j = i + 1; j < rectangles.size(); j++)
        {
            if (rectangles[j] == -1)
            {
                continue;
            }
            if (sum + rectangles[j] <= width)
            {
                sum += rectangles[j];
                rectangles[j] = -1;
            }
        }
        level++;
    }
    if (rectangles[rectangles.size() - 1] != -1)
    {
        level++;
    }
    // cout << "ANS" << level << endl;
    cout << level << endl;
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

void Print(vector<LL> arr)
{
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;

typedef long long int LL;

void Print(vector<int> arr);
void make_mutation(vector<int> v);
class Position
{
public:
    int x;
    int y;
};
void solve()
{
    int n;
    vector<string> rows;
    vector<Position> points;
    vector<Position> new_points;

    Position first, second;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string row;
        cin >> row;
        rows.push_back(row);
        for (int j = 0; j < n; j++)
        {
            if (row[j] == '*')
            {
                Position point;
                point.x = i;
                point.y = j;
                points.push_back(point);
            }
        }
    }

    if (points[0].x == points[1].x)
    {
        if (points[0].x < n - 1)
        {
            first.x = points[0].x + 1;
            first.y = points[0].y;

            second.x = points[1].x + 1;
            second.y = points[1].y;
        }
        else
        {
            first.x = points[0].x - 1;
            first.y = points[0].y;

            second.x = points[1].x - 1;
            second.y = points[1].y;
        }
    }
    else if (points[0].y == points[1].y)
    {
        if (points[0].y < n - 1)
        {
            first.x = points[0].x;
            first.y = points[0].y + 1;

            second.x = points[1].x;
            second.y = points[1].y + 1;
        }
        else
        {
            first.x = points[0].x;
            first.y = points[0].y - 1;

            second.x = points[1].x;
            second.y = points[1].y - 1;
        }
    }
    else
    {
        first.x = points[0].x;
        first.y = points[1].y;

        second.x = points[1].x;
        second.y = points[0].y;
    }
    // cout << first.x << " " << first.y << endl;
    // cout << second.x << " " << second.y << endl;
    rows[first.x][first.y] = '*';
    rows[second.x][second.y] = '*';
    for (string x : rows)
    {
        cout << x << endl;
    }
}

int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
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
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <bitset>
using namespace std;

void Print(vector<int> arr);
int convert_int_to_binary(int n);
bool is_in_range(int current, int range)
{
    return (current >= 0 && current < range) ? true : false;
}
int cal_cost(char str1, char str2, int x, int y)
{
    if (str1 == 'C' && str2 == 'J')
    {
        return x;
    }
    else if (str1 == 'J' && str2 == 'C')
    {
        return y;
    }
    else
    {
        return 0;
    }
}

char get_str_depend_each_important(string row, int i, char major, char minor, int x, int y)
{
    int major_left, major_right, minor_left, minor_right;
    if (is_in_range(i - 1, row.length()) == false)
    {
        if (cal_cost(major, row[i + 1], x, y) <= cal_cost(minor, row[i + 1], x, y))
        {
            return major;
        }
        else
        {
            return minor;
        }
    }
    else if (is_in_range(i + 1, row.length()) == false)
    {
        if (cal_cost(major, row[i - 1], x, y) <= cal_cost(minor, row[i - 1], x, y))
        {
            return major;
        }
        else
        {
            return minor;
        }
    }
    else
    {
        major_left = cal_cost(major, row[i - 1], x, y);
        major_right = cal_cost(major, row[i + 1], x, y);

        minor_left = cal_cost(minor, row[i - 1], x, y);
        minor_right = cal_cost(minor, row[i + 1], x, y);

        if (major_left + major_right <= minor_left + minor_right)
        {
            return major;
        }
        else
        {
            return minor;
        }
    }
}

void process(int t)
{
    int x, y;
    int ans = 0;
    int count_c = 0;
    int count_j = 0;
    int len_row;
    string new_row = "";
    string row_c = "";
    string row_j = "";
    string row;

    cin >> x >> y;
    cin >> row;
    len_row = row.length();
    row_c = row;
    row_j = row;

    for (int i = 0; i < len_row; i++)
    {
        if (i == 0 && i + 1 == len_row)
        {
            ans = 0;
            break;
        }
        if (row[i] == '?')
        {
            row_c[i] = get_str_depend_each_important(row_c, i, 'C', 'J', x, y);
            row_j[i] = get_str_depend_each_important(row_j, i, 'J', 'C', x, y);
        }
        else
        {
            row_c[i] = row[i];
            row_j[i] = row[i];
        }
    }
    for (int i = 0; i < len_row; i++)
    {
        count_c += cal_cost(row_c[i], row_c[i + 1], x, y);
        count_j += cal_cost(row_j[i], row_j[i + 1], x, y);
    }
    if (count_c <= count_j)
    {
        ans = count_c;
    }
    else
    {
        ans = count_j;
    }

    // cout << "Case # " << row << " " << ans << " : "
    //      << row_c << " : " << row_j << " : " << count_c << " : " << count_j
    //      << endl;
    cout << "Case #" << t << ": " << ans << endl;
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

void Print(vector<int> arr)
{
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

int convert_int_to_binary(int n)
{
    string binary = bitset<8>(n).to_string(); //to binary
    cout << binary << "\n";
}
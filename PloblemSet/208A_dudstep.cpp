#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

string trim_left(const string &str)
{
    const string pattern = " \f\n\r\t\v";
    return str.substr(str.find_first_not_of(pattern));
}

//
//Right trim
//
string trim_right(const string &str)
{
    const string pattern = " \f\n\r\t\v";
    return str.substr(0, str.find_last_not_of(pattern) + 1);
}

//
//Left and Right trim
//
string trim(const string &str)
{
    return trim_left(trim_right(str));
}

int main()
{
    string input_str;
    string wub = "";
    string ans = "";
    int i = 0;
    cin >> input_str;

    while (i < input_str.length())
    {
        if (input_str[i] == 'W' && i + 2 < input_str.length() &&
            input_str[i + 1] == 'U' && input_str[i + 2] == 'B')
        {
            i += 3;
            ans[ans.length() - 1] == ' ' ? ans : ans += " ";
        }
        else
        {
            ans += input_str[i];
            i++;
        }
    }
    ans = trim(ans);
    cout << ans << endl;

    return 0;
}

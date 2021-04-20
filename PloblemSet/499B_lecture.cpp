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

class Word
{
public:
    string text1;
    string text2;
    string getShortestWord()
    {
        if (text1.length() > text2.length())
        {
            return text2;
        }
        return text1;
    }
};

void solve()
{
    int n, m;
    vector<Word> words;
    string ans;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        Word word;
        string temp1, temp2;

        cin >> temp1 >> temp2;
        // cout << "---" << temp1 << endl;
        word.text1 = temp1;
        word.text2 = temp2;

        words.push_back(word);
    }

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        for (auto word : words)
        {
            if (word.text1.compare(temp) == 0)
            {
                ans += word.getShortestWord() + (i + 1 == n ? "" : " ");
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    solve();
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
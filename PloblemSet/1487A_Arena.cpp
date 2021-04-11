#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
// doing
class Hero
{
public:
    int index;
    int power;
};

bool compareHero(Hero h1, Hero h2)
{
    return (h1.power > h2.index);
}

void process()
{
    vector<Hero> heroes;
    int num_heroes;
    cin >> num_heroes;

    for (int i = 0; i < num_heroes; i++)
    {
        Hero temp;
        cin >> temp.power;
        temp.index = i;
        heroes.push_back(temp);
    }

    sort(heroes.begin(), heroes.end(), compareHero);

    if (heroes[0].power == heroes[1].power)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << heroes[0].index + 1 << endl;
    }
}

int main()
{
    int testCase;
    cin >> testCase;

    for (int t = 0; t < testCase; t++)
    {
        process();
    }

    return 0;
}

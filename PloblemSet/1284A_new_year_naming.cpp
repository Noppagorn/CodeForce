//1284A_new_year_naming.cpp
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,q,x;
    vector<string> s;
    vector<string> t;
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        string temp;
        cin >> temp;
        s.push_back(temp);
    }
    for (int i = 0; i < m;i++){
        string temp;
        cin >> temp;
        t.push_back(temp);
    }
    cin >> q;
    for (int tc = 0; tc < q; tc++){
        cin >> x;
        x--;
        string result = s[x%n] + t[x%m];
        cout << result << endl;
    }
    return 0;
}
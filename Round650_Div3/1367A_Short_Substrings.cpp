//1367A_Short_Substrings.cpp
#include<iostream>
using namespace std;

int main(){
    int n;
    string inp;
    string outP;
    string pre;
    cin >> n;
    for (int t = 0 ; t < n; t++){
        outP.clear();
        cin >> inp;
        outP += inp[0];
        for (int i = 1 ; i < inp.size() - 1 ; i++){
            if (i % 2 == 1){
                outP += inp[i];
            }
        }
        outP += inp[inp.size() - 1];
        cout << outP << endl;
    }
    return 0;
}
//A_Double_Cola.cpp

#include<iostream>

using namespace std;

int main(){
    string arr[5] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};

    int n;
    cin >> n;

    cout << arr[(n - 1)%5] << endl;
    return 0;
}
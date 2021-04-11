//1367_even_array.cpp
#include<iostream>
using namespace std;


int main(){
    int tcase = 0;
    cin >> tcase;
    for (int t = 0 ; t < tcase;t++){
        int num;
        int countE = 0;
        int countO = 0;
        cin >> num;
        for (int i = 0; i < num;i++){
            int temp;
            cin >> temp;
            if (i % 2 != temp % 2){
                if (temp % 2 == 1){
                    countO +=1;
                }
                else{
                    countE +=1;
                }
            }
        }
        if (countE != countO){
            cout << -1 << endl;
        }
        else{
            cout << (countE + countO)/2 << endl;
        } 
    }
    return 0;
}
//Codeforces_Round_624_Div3
//1311A_add_odd_subtract_even.cpp

#include<iostream>
using namespace std;

int main(){
    int tc;
    int a,b;
    int count = 0;
    cin >> tc;

    for (int t = 0 ; t < tc; t++){
        cin >> a >> b;
        if (a > b){
            if ((a - b) % 2 == 1){
                count = 2;
            }
            else{
                count = 1;
            }
        }

        else if (a < b){
            if ((b - a) % 2 == 1){
                count = 1;
            }
            else{
                count = 2;
            }
        }
        else {
           count = 0; 
        }
        cout << count << endl;
    }
    return 0;
}
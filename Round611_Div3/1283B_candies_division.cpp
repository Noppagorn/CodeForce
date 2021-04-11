//1283B_candies_division.cpp

#include<iostream>
using namespace std;

int main(){
    int tcase;
    cin >> tcase;
    for (int tc = 0 ; tc < tcase; tc++){
        int candy,kid,ans;
        cin >> candy >> kid;
        int position = candy / kid;
        if (position == 1) {
            position = kid;
        }

        if (position == 0 || candy < kid){
            ans = candy;
        }
        else{
            int peice = candy % kid;
            if (peice < (position / 2) + 1){
                ans = candy;
            }
            else{
                ans = (candy - peice) + (position / 2) ;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
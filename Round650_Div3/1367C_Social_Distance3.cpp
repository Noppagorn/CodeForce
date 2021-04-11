#include<iostream>
using namespace std;

int main(){
    int tcase = 0;
    cin >> tcase;
    for (int tc = 0; tc < tcase; tc++){
        int len,people;
        string table = "";
        cin >> len >> people;
        for (int i = 0; i < len;i++){
            char temp;
            cin >> temp;
            table += temp;
            if (temp == '1' && i-1 >= 0){
                table[i-1] = '1';
            }
            else if (temp == '1' && i+1 < len){
                table[i+1] = '1';
            }
        }
        int count = 0;
        //cout <<"test :"<< table << endl;
        for (int i = 0; i < len;i++){
            if (people == 0){
                break;
            }
            if (table[i] == '0'){
                if (i-1 >= 0){
                    table[i-1] = '1';
                }
                else if (i+1 < len){
                    table[i+1] = '1';
                }
                count++;
                people--;
            }
        }
        cout << count << endl;
    }
    return 0;
}
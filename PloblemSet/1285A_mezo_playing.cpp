//1285A_mezo_playing_zoma.cpp
#include<iostream>
using namespace std;
int main(){
    int n,left = 0,right = 0;
    int result = 0;
    string commands;
    cin >> n;
    cin >> commands;
     
    for (int i = 0; commands[i] != '\0';i++){
        if (commands[i] == 'L'){
            left++;
        }else{
            right++;
        }
    }
    cout << left + right + 1 << endl;
    
    return 0;
}
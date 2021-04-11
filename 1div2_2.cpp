//1div2_2.cpp
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++){
        string word;
        cin >> word;
        int keep = 0;
        int count = 0 ;
        char begin;
        char stop;
        for (j = 0; word[j] != '\0' ; j++){
            if (word[j] == '?'){
                if (j == 0){
                    keep = 0;
                    begin = word[keep];
                }else
                {
                    keep = j - 1;
                    begin = word[keep];
                }

                for (int t = j ; word[t] == '?'; t++){
                    cout++;
                    stop = word[t];
                }
            }
        }
    }
    return 0;
}
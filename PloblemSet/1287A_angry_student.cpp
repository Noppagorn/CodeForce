//1287A_angry_student.cpp
#include<iostream>
using namespace std;

int main(){
    int tcase,strLenght;
    int count;
    string a,aCopy;
    bool isChange,state;    

    cin >> tcase;
    for (int tc = 0 ; tc < tcase; tc++){
        cin >> strLenght;
        cin >> a;
        aCopy = a;
        isChange = true;
        count = 0;
        while(true){
            state = false;
            isChange = false;
            for (int i = 0; i < strLenght;i++){
                if (a[i] == 'A'){
                    state = true;
                }
                else if (state && a[i] == 'P'){
                    isChange = true;
                    aCopy[i] = 'A';
                    state = false;
                    
                }
            }
            //cout << "aCopy : " << aCopy << endl;
            if (!isChange){
                break;
            }
            if (isChange){
                count++;
            }
            a = aCopy;
        }
    //cout << "This is count " << count << endl;
    cout <<  count << endl;

    }
    return 0;
}

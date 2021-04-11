//A_anto_and_Danik.cpp

#include<iostream>
using namespace std;

int main(){
    int n;
    string queues;
    int anton = 0;
    int danik = 0;
    cin >> n;
    cin >> queues;
    for (int i = 0 ; queues[i] != '\0';i++){
        if (queues[i] == 'A'){
            anton++;
        }
        else 
        {
            danik++;
        }
        
    }
    if (anton > danik){
        cout << "Anton" << endl;
    }
    else if (anton == danik){
        cout << "Friendship" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }
    
    return 0;
}

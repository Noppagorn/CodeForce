//1281A_suffix_three.cpp

#include<iostream>
#include<string>
using namespace std;

int main(){
	int tcase;
	cin >> tcase;
	for (int tc = 0; tc < tcase; tc++){
		string sentence;
		cin >> sentence;
		int senlen = sentence.length() - 1;
		if (sentence[senlen] == 'o' && sentence[senlen - 1] == 'p'){
			cout << "FILIPINO" << endl;
		}
		else if (sentence[senlen] == 'u' 
				&& sentence[senlen - 1] == 's'
				&& sentence[senlen - 2] == 'e'
				&& sentence[senlen - 3] == 'd'
				){
			cout << "JAPANESE" << endl;
		}
		else if (sentence[senlen] == 'u' 
				&& sentence[senlen - 1] == 's'
				&& sentence[senlen - 2] == 'a'
				&& sentence[senlen - 3] == 'm'
				){
			cout << "JAPANESE" << endl;
		}	
		else if (sentence[senlen] == 'a' 
				&& sentence[senlen - 1] == 'd'
				&& sentence[senlen - 2] == 'i'
				&& sentence[senlen - 3] == 'n'
				&& sentence[senlen - 4] == 'm'
				){
			cout << "KOREAN" << endl;
		}	
	}

}

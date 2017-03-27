#include<iostream>
#include<string>
using namespace std;

int main(){
	string crypt;
	int days = 0;
	cin >> crypt;

	for (int i = 0; i < crypt.length(); i++){
		if (i % 3 == 0 && crypt[i] != 'P'){
			crypt[i] = 'P';
			days++;
		}
		else if (i % 3 == 1 && crypt[i] != 'E'){
			crypt[i] = 'E';
			days++;
		}
		else if (i % 3 == 2 && crypt[i] != 'R'){
			crypt[i] = 'R';
			days++;
		}
	}
	cout << days;
	return 0;
}
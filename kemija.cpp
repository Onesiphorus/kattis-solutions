#include<iostream>
#include<string>

using namespace std;

int main(){
	string hidden;

	getline(cin, hidden);

	for (int i = 0; i < hidden.length(); i++){
		cout << hidden[i];
		if (hidden[i] == 'a' || hidden[i] == 'A' || hidden[i] == 'e' || hidden[i] == 'E' || hidden[i] == 'i' || hidden[i] == 'I' || hidden[i] == 'o' || hidden[i] == 'O' || hidden[i] == 'u' || hidden[i] == 'U'){
			i += 2;
		}
	}


	return 0;
}
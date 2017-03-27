#include<iostream>
#include<string>

using namespace std;

int main(){
	string swaps;
	cin >> swaps;
	char swap;
	int ball = 1;
	for (int i = 0; i < swaps.length(); i++){
		swap = swaps[i];
		switch (swap)
		{
		case 'A':
			switch (ball){
			case 1: ball = 2;
				break;
			case 2: ball = 1;
				break;
			default: break;
			}
			break;
		case 'B':
			switch (ball){
			case 2: ball = 3;
				break;
			case 3: ball = 2;
				break;
			default:
				break;
			}
			break;
		case 'C':
			switch (ball){
			case 1: ball = 3;
				break;
			case 3: ball = 1;
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
		//cout << ball;
	}
	cout << ball;
	return 0;
}
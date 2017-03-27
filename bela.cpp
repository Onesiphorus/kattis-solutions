#include<iostream>
#include<string>

using namespace std;

int main(){
	int N;
	char dom;
	string card;
	int points = 0;

	cin >> N >> dom;

	for (int i = 0; i < 4 * N; i++){
		cin >> card;
		switch (card[0])
		{
		case 'A': points += 11;
			break;
		case 'K': points += 4;
			break;
		case 'Q': points += 3;
			break;
		case 'J':
			if (card[1] == dom) points += 20;
			else points += 2;
			break;
		case 'T': points += 10;
			break;
		case '9': if (card[1] == dom) points += 14;
		default:
			break;

		}
	}
	cout << points;
	return 0;
}
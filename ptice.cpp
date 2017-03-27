#include<iostream>
#include<string>

using namespace std;

int main(){
	int n, aScore = 0, bScore = 0, gScore = 0, high;
	string answer; 
	char adrian[100], bruno[100], goran[100];
	cin >> n;

	cin >> answer;
	for (int i = 0; i < n; i++){
		if (i % 3 == 0) adrian[i] = 'A';
		else if (i % 3 == 1) adrian[i] = 'B';
		else adrian[i] = 'C';

		if (i % 4 == 0) bruno[i] = 'B';
		else if (i % 4 == 1) bruno[i] = 'A';
		else if (i % 4 == 2) bruno[i] = 'B';
		else bruno[i] = 'C';

		if (i % 6 == 0 || i % 6 == 1) goran[i] = 'C';
		else if (i % 6 == 2 || i % 6 == 3) goran[i] = 'A';
		else goran[i] = 'B';
	}
	for (int i = 0; i < n; i++){
		if (answer[i] == adrian[i]) {
			aScore++;
			if (aScore > high) high = aScore;
		}
		if (answer[i] == bruno[i]) {
			bScore++;
			if (bScore > high) high = bScore;
		}
		if (answer[i] == goran[i]) {
			gScore++;
			if (gScore > high) high = gScore;
		}
	}
	cout << high << endl;
	if (high != 0){
		if (high == aScore) cout << "Adrian\n";
		if (high == bScore) cout << "Bruno\n";
		if (high == gScore) cout << "Goran\n";
	}

	return 0;
}
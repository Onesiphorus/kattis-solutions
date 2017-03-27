#include<iostream>

using namespace std;

int main(){
	int winner;
	int high = 0, currScore = 0;
	int s1, s2, s3, s4;

	for (int i = 0; i < 5; i++){
		cin >> s1 >> s2 >> s3 >> s4;
		currScore = s1 + s2 + s3 + s4;
		if (currScore > high){
			high = currScore;
			winner = i + 1;
		}
	}
	cout << winner << " " << high;
	return 0;
}
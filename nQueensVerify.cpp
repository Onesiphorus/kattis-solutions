#include<iostream>

using namespace std;

int main(){
	int N;
	static char board[5000][5000];
	int posX, posY, x, y;
	bool correct = true;
	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> posX >> posY;
		if (board[posX][posY] == 'a'){
			correct = false;
			break;
		}
		else {
			board[posX][posY] = 'q';
			x = posX + 1;
			y = posY + 1;
			while (x < N && y < N){
				board[x++][y++] = 'a';
			}
			x = posX - 1;
			y = posY - 1;
			while (x >= 0 && y >= 0){
				board[x--][y--] = 'a';
			}
			x = posX + 1;
			y = posY - 1;
			while (x < N && y >= 0){
				board[x++][y--] = 'a';
			}
			x = posX - 1;
			y = posY + 1;
			while (x >= 0 && y > N){
				board[x--][y++] = 'a';
			}
			x = posX - 1;
			y = posY;
			while (x >= 0){
				board[x--][y] = 'a';
			}
			x = posX + 1;
			y = posY;
			while (x < N){
				board[x++][y] = 'a';
			}
			x = posX;
			y = posY - 1;
			while (y >= 0){
				board[x][y--] = 'a';
			}
			x = posX;
			y = posY + 1;
			while (y < N){
				board[x][y++] = 'a';
			}
			//for (int i = 0; i < N; i++){
			//	for (int j = 0; j < N; j++){
			//		cout << board[i][j];
			//	}
			//	cout << endl;
			//}
		}
	}
	if (correct) cout << "CORRECT" << endl;
	else cout << "INCORRECT" << endl;
	
	return 0;
}
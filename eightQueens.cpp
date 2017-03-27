#include<iostream>

using namespace std;

int main(){
	char board[8][8];
	char input;
	int posX, posY, x, y;
	bool correct = true;

	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			cin >> input;
			if (input == '*'){
				posY = i;
				posX = j;
				if (board[posX][posY] == 'a'){
					correct = false;
					cout << "invalid";
				}
				else {
					board[posX][posY] = 'q';
					x = posX + 1;
					y = posY + 1;
					while (x < 8 && y < 8){
						board[x++][y++] = 'a';
					}
					x = posX - 1;
					y = posY - 1;
					while (x >= 0 && y >= 0){
						board[x--][y--] = 'a';
					}
					x = posX + 1;
					y = posY - 1;
					while (x < 8 && y >= 0){
						board[x++][y--] = 'a';
					}
					x = posX - 1;
					y = posY + 1;
					while (x >= 0 && y > 8){
						board[x--][y++] = 'a';
					}
					x = posX - 1;
					y = posY;
					while (x >= 0){
						board[x--][y] = 'a';
					}
					x = posX + 1;
					y = posY;
					while (x < 8){
						board[x++][y] = 'a';
					}
					x = posX;
					y = posY - 1;
					while (y >= 0){
						board[x][y--] = 'a';
					}
					x = posX;
					y = posY + 1;
					while (y < 8){
						board[x][y++] = 'a';
					}
				}
			}
		}
	}
	if (correct) cout << "valid" << endl;

	return 0;
}
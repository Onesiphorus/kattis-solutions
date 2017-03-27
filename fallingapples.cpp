#include<string>
#include<iostream>


using namespace std;

int main(){
	int R, C;
	bool change;
	cin >> R >> C;

	char **m;

	m = new char*[R];
	for (int i = 0; i < C; i++){
		m[i] = new char;
	}

	string input;

	for (int i = 0; i < R; i++){
		cin >> input;
		//cout << input << endl;
		for (int j = 0; j < C; j++){
			m[i][j] = input.at(j);
			//cout << m[i][j] << endl;
		}
	}
	/* NAIVE APPROACH
	do{
		change = false;
		for (int i = R - 2; i >= 0; i--){
			for (int j = C - 1; j >= 0; j--){
				if (m[i][j] == 'a' && m[i + 1][j] == '.'){
					m[i][j] = '.';
					m[i + 1][j] = 'a';
					change = true;
				}
			}
		}
	} while (change);*/
	int num;
	int barrier;
	bool isBarrier;
	int j;
	for (int i = 0; i < C; i++){
		barrier = R;
		isBarrier = false;
		num = 0;
		j = 0;
		do{
			if (m[j][i] == '#') {
				barrier = j;
				isBarrier = true;
			}
			if (m[j][i] == 'a'){
				num++;
			}
			j++;
		} while (!isBarrier && j < R);
		if (barrier > 0){
			for (int j = barrier - 1; j >= 0; j--){
				if (num > 0){
					m[j][i] = 'a';
					num--;
				}
				else {
					m[j][i] = '.';
				}
			}
		}
	}

	for (int i = 0; i < R; i++){
		for (int j = 0; j < C; j++){
			cout << m[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < R; i++){
		delete [] m[i];
	}
	delete [] m;
	return 0;


}
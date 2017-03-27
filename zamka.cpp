#include<iostream>

using namespace std;

int main(){
	int L, D, X, N, M, temp;

	cin >> L;
	cin >> D;
	cin >> X;

	for (int i = L; i <= D; i++){
		temp = i;
		N = 0;
		while (temp >= 10000){
			temp -= 10000;
			N++;
		}
		while (temp >= 1000){
			temp -= 1000;
			N++;
		}
		while (temp >= 100){
			temp -= 100;
			N++;
		}
		while (temp >= 10){
			temp -= 10;
			N++;
		}
		while (temp >= 1){
			temp -= 1;
			N++;
		}
		if (N == X){
			N = i;
			break;
		}
	}
	for (int i = D; i >= L; i--){
		temp = i;
		M = 0;
		while (temp >= 10000){
			temp -= 10000;
			M++;
		}
		while (temp >= 1000){
			temp -= 1000;
			M++;
		}
		while (temp >= 100){
			temp -= 100;
			M++;
		}
		while (temp >= 10){
			temp -= 10;
			M++;
		}
		while (temp >= 1){
			temp -= 1;
			M++;
		}
		if (M == X){
			M = i;
			break;
		}
	}
	cout << N << endl;
	cout << M;
	return 0;
}
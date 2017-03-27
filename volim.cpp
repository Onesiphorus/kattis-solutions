#include<iostream>
#include<string>

using namespace std;

int main(){
	int K, N, T;
	char Z;
	int time = 210;
	cin >> K;
	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> T >> Z;
		time -= T;
		if (time <= 0){
			cout << K;
			break;
		}
		else {
			if (Z == 'T') {
				if (K == 8) K = 1;
				else K++;
			}
		}
	}
	return 0;
}
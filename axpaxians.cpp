#include<iostream>
#include<string>

using namespace std;

int main(){
	string axpaxian;

	cin >> axpaxian;
	cout << axpaxian[0];
	for (int i = 1; i < axpaxian.length(); i++){
		if (axpaxian[i] != axpaxian[i - 1]){
			cout << axpaxian[i];
		}
	}
	return 0;
}
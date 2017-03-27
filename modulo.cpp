#include<iostream>

using namespace std;

int main(){
	int numbers[10];
	int input;
	int count = 0;
	bool add = true;
	for (int i = 0; i < 10; i++){
		numbers[i] = -1;
	}
	for (int i = 0; i < 10; i++){
		cin >> input;
		numbers[i] = input % 42;
		for (int j = 0; j < i; j++){
			if (numbers[j] == numbers[i]){
				add = false;
			}
		}
		if (add) count++;
		add = true;
	}
	cout << count;

	return 0;
}
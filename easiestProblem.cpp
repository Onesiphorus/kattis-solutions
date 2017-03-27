#include<iostream>

using namespace std;

int sum(int);
int recSum(int, int);

int main(){
	int num;
	int test;
	int sumNum = 0;
	int sumTest = 0;
	int count = 11;
	int input;
	

	cin >> input;

	while (input != 0){
			
		num = input;
		sumNum = 0;
		sumTest = 0;
		count = 11;
		sumNum = sum(num);
		//cout << sumNum << endl;
			do{
				test = count*input;
				sumTest = 0;
				sumTest = sum(test);
				if (sumTest != sumNum) count++;
			} while (sumTest != sumNum);
			//cout << sumTest << " " << sumNum << endl;
			cout << count << endl;
			cin >> input;
		}
			return 0;
}

int sum(int n){
	return recSum(n, 1000000);
}

int recSum(int n, int div){
	if (n < 10) return n;
	else if (n >= div) return ((n - n%div)/div + recSum(n - (n - n%div), div / 10));
	else return recSum(n, div/10);
}
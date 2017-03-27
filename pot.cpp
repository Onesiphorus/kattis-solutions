#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n, num, temp, sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> num;
		temp = 0;
		while (num >= 1000){
			num -= 1000;
			temp += 100;
		}
		while (num >= 100){
			num -= 100;
			temp += 10;
		}
		while (num >= 10){
			num -= 10;
			temp++;
		}
		sum += pow(temp, num);
	}
	cout << sum;
	return 0;
}